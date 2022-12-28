//WAP to return the sum of all sub arrays
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,0,7,2};

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        int sum = 0;
        for(int j=i;j<sizeof(arr)/sizeof(int);j++)
        {
            sum = sum + arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;   
}