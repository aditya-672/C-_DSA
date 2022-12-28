#include <iostream>
using namespace std;

int main() {
    int n,x,y,max=0,p=0,a=0,b=0;
    cin>>n;
    while(n>0)
    {
        cin>>x>>y;
        a+=x;
        b+=y;
        if(abs(a-b)>max)
        {
            max=abs(a-b);
            if(a>b)
            p=1;
            else
            p=2;
        }
        n--;
    }
    cout<<p<<" "<<max<<endl;
	return 0;
}
