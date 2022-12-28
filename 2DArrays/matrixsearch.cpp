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
    int r=0,c=m-1;
    bool flag = false;
    while (r < n && c >= 0)
    {
        if(arr[r][c]==x){
            flag=true;
        }
        if(arr[r][c]>x){
            c--;
        }
        else{
            r++;
        }
    }

    if (flag)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    
    
    return 0;
}