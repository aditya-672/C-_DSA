#include <iostream>
using namespace std;

void seiveoferat(int num)
{
    int prime[100] = {0};
    for (int i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= num; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    seiveoferat(n);
    return 0;
}