// WAP for perfect number

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,mul=1;
    vector<int> arr;

    while(n){
        arr.push_back(n%10);
        n=n/10;
    }    

    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        mul*=arr[i];
    }

    cout<<sum<<" "<<mul;

    return 0;
}