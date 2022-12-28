// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s1,s2;
//         cin>>s1>>s2;
//         for (int i = 0; i < s1.length(); i++)
//         {
//             if(s1[i] == s2[i]){
//                 cout<<"G";
//             }
//             else{
//                 cout<<"B";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n/4==0){
	        cout<<"NO";
	    }
	    else{
	        cout<<"YES";
	    }
	    cout<<endl;
	}
	return 0;
}
