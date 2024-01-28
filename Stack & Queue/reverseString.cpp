#include<iostream>
#include<stack>
using namespace std;

void reverseString(string s){
    stack<string> str;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i]!=' ' && i<s.length())
        {
            word.push_back(s[i]);
            // word+=s[i];
            i++;
        }
        str.push(word);
    }

    while (!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }
    
    
}

int main()
{
    string s = "Hey, how are you doing? dude";
    reverseString(s);
    return 0;
}