#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] == s[n/2+i])
            {
                flag++;
            }
        }
        if (flag == n/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        t--;
    }

    return 0;
}