#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }

    for(int c=0;c<n;c++){
        cout<<arr[c]<<endl;
    }


    return 0;
}