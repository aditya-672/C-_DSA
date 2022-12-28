#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s1 = "54213";
    sort(s1.begin(),s1.end(),greater<char>());
    cout<<s1<<endl;
    return 0;
}