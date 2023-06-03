#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for (int i = 0; i < n ; i++)
    {
        int sum;
        for (int j = 0; j < n ; j++)
        {
            sum = arr[i] + arr[j];
            if(sum == t){
                cout<<i<<" "<<j;
            }
           
        }
    }
    
     
}