#include<iostream>
using namespace std;
int main(){
    int max = -19999999;
    int arr[] = {0,-9,1,3,-4,5};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>max){
            max = arr[i];
            cout<<max<<endl;
        }
        else{
            cout<<max<<endl;
        }
    }
    return 0;
}