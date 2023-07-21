#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
    map<int,int> m;

    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    
    int sum = 0;
    for(auto ite:m){
        if(ite.second > 1){
            sum+=ite.first;
        }
    }
    
    cout<<"Ans -> "<<sum<<endl;
    return 0;
}