// You’re given an array of integers, print the number of times each integer has occurred in the array.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto ele:mp)
    {
        cout<<ele.first<<" occurs "<<ele.second<<" times"<<endl;
    }
    
    return 0;
}