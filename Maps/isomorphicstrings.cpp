#include<iostream>
#include<unordered_map>
using namespace std;

bool checkIsomorphic(string s1, string s2){
    unordered_map<char,char> mp;

    for (int i = 0; i < s1.length(); i++)
    {
        if (mp.find(s1[i]) != mp.end())
        {
            if (mp[s1[i]] != s2[i])
            {
                return false;
            }
        }
        else{
            mp[s1[i]] = s2[i];
        }
        
    }
    
}

bool check(string s1, string s2){
    if (s1.length() != s2.length())
    {
        return false;
    }
    
    bool s1s2 = checkIsomorphic(s1,s2);
    bool s2s1 = checkIsomorphic(s2,s1);

    return s1s2 and s2s1;

}

int main()
{
    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

    check(s1,s2) ? cout<< "Isomorphic" : cout<<"Not Isomorphic";

    return 0;
}