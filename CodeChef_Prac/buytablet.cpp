#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, max=0;
        cin >>n>>b;
        int a1[n];
        for (int i = 0; i < n*3; i++)
        {
            cin >> a1[i];
        }
        for (int i = 2; i < n*3; i+=3)
        {
            if (a1[i] > b)
            {
                a1[i-1] = 0;
                a1[i-2] = 0;
            }
        }
        for (int i = 0; i < n*3; i+=3)
        {
            if (a1[i]*a1[i+1] > max)
            {
                max = a1[i]*a1[i+1];
            }
        }
        if(max == 0){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<max<<endl;
        }
    }
    return 0;
}