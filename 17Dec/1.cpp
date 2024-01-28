// Find the last word in a sentence using any coding language

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;

    getline(cin, s1);

    int pos = s1.find_last_of(' ');

    cout<<s1.substr(pos + 1);

    return 0;
    
}