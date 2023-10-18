// Write the code to find the Fibonacci series upto the nth term

#include<iostream>
using namespace std;


int main()
{
    int n;

    cin>>n;

    int f = 1;
    int s =1 ;

    cout<<f<<endl;
    cout<<s<<endl;

    for (int i = 2; i < n; i++)
    {
        int temp = f + s;
        f = s;
        s = temp;

        cout<<temp<<endl;
    }

    return 0;
}