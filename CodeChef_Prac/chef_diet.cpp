#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int rem=0,cnt=0;
        for (int i = 0; i < n; i++)
        {
            arr[i]+=rem;
            if (arr[i]>=k)
            {
                cnt++;
                rem = arr[i] - k;
            }
            else{
                cout<<"NO "<<i+1<<endl;
            }
        }
        if(cnt==n)
            {
                cout<<"YES"<<endl;
            }
    }
    

    return 0;
}