#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
        (n-m < 0) ? cout<<"0"<<endl : cout<<n-m<<endl; 
	}
	return 0;
}
