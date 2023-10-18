// Write a code to replace a substring in a string

#include<iostream>
#include<string>
using namespace std;

string replaceString(string &s1,string s2,string s3){
    
    string new_str = s1.substr(0,s1.find(s2));
    new_str += s3;
    new_str += s1.substr(s1.find(s2) + s2.length());

    return new_str;
}

int main()
{   
    // string s1;
    // getline(cin,s1);

    // string s2;
    // getline(cin, s2);

    // string s3;
    // getline(cin, s3);

    // s1.replace(s1.find(s2),s2.length(),s3);

    // cout<<s1<<endl;

    string s1;
    getline(cin,s1);

    string s2;
    getline(cin, s2);

    string s3;
    getline(cin, s3);    

    cout<<replaceString(s1,s2,s3);

    return 0;
}