// Problem Statement –

// You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.

#include<iostream>
using namespace std;

void makeItback(string str){
    string str1 = "";
    string str2 = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '#')
        {
            str1.push_back('#');
            /* code */
        }
        else{
            str2.push_back(str[i]);
        }
    }

    str = str1.append(str2);
    cout<<str;
}

int main(){
    string str = "Move#Hash#to#Front";  
    makeItback(str);
    return 0;
}