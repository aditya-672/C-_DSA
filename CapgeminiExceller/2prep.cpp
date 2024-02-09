// Problem Statement –

// Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str = "aabbbbeeeeffggg";

    map<char, int> mp;

    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }

    for (auto ele : mp)
    {
        cout << ele.first << ele.second;
    }

    return 0;
}