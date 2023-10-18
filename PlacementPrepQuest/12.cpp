// Find non-repeating characters in a string
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s = "abcdeda tits flof";
    map<char, int> map;
    for (int i = 0; i < s.length(); i++)
    {
        map[s[i]]++;
    }
    for (auto itr : map)
    {
        if (itr.second <= 1)
        {
            cout << itr.first << " " << itr.second << endl;
        }
    }

    return 0;
}