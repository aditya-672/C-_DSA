#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<arr[i][j]<<" ";
                flag = true;
            }
        }
        cout<<endl;
    }

    if(flag){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }

    return 0;
}