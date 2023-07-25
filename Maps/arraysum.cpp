// Given an array of length n and a target, return a pair whose sum is equal to the target. If there is no pair present, return -1.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> checkSum(vector<int> &v,int target){
    unordered_map<int,int> map;
    vector<int> ans(2,-1);
    for (int i = 0; i < v.size(); i++)
    {
        if (map.find(target - v[i]) != map.end())
        {
            ans[0] = map[target - v[i]];
            ans[1] = i;
            return ans;
        }
        else{
            map[v[i]] = i;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];        
    }
    
    int t;
    cout<<"Enter Target "<<endl;
    cin>>t;

    vector<int> ans = checkSum(v,t);

    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}