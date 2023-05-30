#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = 0, b = 0;
        int max = 0;
        if (k > 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                a += arr[i];
            }
            for (int i = 1; i < n; i += 2)
            {
                b += arr[i];
            }
            if (a == b)
            {
                cout << "NO" << endl;
            }
            else
            {
                while (k)
                {
                    for (int i = 1; i < n-2; i += 2)
                    {
                        if (arr[i] + arr[i + 2] > max)
                        {
                            cout << arr[i] + arr[i + 2] << endl;
                            max = arr[i] + arr[i + 2];
                        }
                    }
                    cout<<a<<" "<<b<<endl;
                    cout << "MAX" << max << endl;
                    k--;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}