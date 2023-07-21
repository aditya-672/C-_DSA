// Can you make the strings equal?
// Given an array of strings. You can move any number of characters from one string to any other string any number of times. You just have to make all of them equal.
// Print "Yes" if you can make every string in the array equal by using any number of operations
// otherwise print "No".
// Input: ["collegeee", "coll", "collegge"]
// Output: Yes
// Explanation: string at 1 index can take two 'e' from 0 index string and one 'g' from 2 index string.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{

    vector<string> arr  {"collegeee","coll","collegge"};

    unordered_map<char,int> ch;

    for (int i = 0; i < arr.size(); i++)
    {
        string st = arr[i];
        for (int j = 0; j < st.length(); j++)
        {
            ch[st[j]]++;
        }
        
    }
    
    bool check;

    for (auto iter:ch)
    {
        if (iter.second % arr.size() == 0)
        {
            check = true;
        }
        else {
            check = false;
        }
    }
    
    if (check)
    {
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}