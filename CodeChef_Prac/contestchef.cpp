#include<iostream>
using namespace std;
int main(){
    int t;
    while (t>0)
    {
        int n,a=0,b=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            char arr[100];
            cin>>arr;

            if(arr[0]=='S')
                a++;
            else
                b++;
        }
        cout<<a<<" "<<endl;
        t--;
    }
    
    return 0;
}