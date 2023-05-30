#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {   
            if(count>2){
                break;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count++;
            }
            else{
                count = 0;
            }
        }
        if (count > 2)
        {
           cout<<"Happy"<<endl;
        }
        else{
            cout<<"Sad"<<endl;
        }
        
    }

    return 0;
}