#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
	    for(int i = 0; i < n; i++){
	        cin>>a[i];
	    }
	    int b[n] = {0};
	    for(int i = 0; i < n; i++){
	        b[a[i]-1]++;
	    }
	    for(int i = 0; i < n; i++){
	        if(a[i]-1 == i){
	            b[a[i]-1] = 0;
	        }
	    }
	    int res = 0;
	    for(int i = 0; i < n; i++){
	        if(b[i] >= k){
	            res++;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
