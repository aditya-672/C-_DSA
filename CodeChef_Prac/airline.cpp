#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (1 <= a <= 10 && 1 <= b <= 10 && 1 <= c <= 10 && 15 <= d <= 20 && 5 <= e <= 10)
        {
            if (a > e && b > e && c > e)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (((a + b <= d) && (a + c <= d) && (b + c <= d)) && (a < e || b < e || c < e))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else{
            return 0;
        }
    }

    return 0;
}