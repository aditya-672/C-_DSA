#include <iostream>
using namespace std;
int main()
{
    int t;  
    cin >> t;
    while (t--){
        int a,b,c=0,d=0,i=1;
        cin>>a>>b;
        while(true)
        {
            c+=i;
            if (c>a)
            {
                cout<<"Bob"<<endl;
                break;
            }
            i++;
            d+=i;
            if (d>b)
            {
                cout<<"Limak"<<endl;
                break;
            }
            i++;
        }
        
    }
    return 0;
}