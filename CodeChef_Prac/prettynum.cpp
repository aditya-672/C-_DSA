#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,count = 0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(i%10 == 0) {
                if(i == 2 || i == 3 ||i == 9){
                    count++;
                }
            }
            if(i%10 == 2 || i%10 == 3 || i%10 == 9){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }

    return 0;
}