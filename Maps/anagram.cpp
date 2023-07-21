// check whether two string are anagram of each other ?

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool check(string s1,string s2){

    if(s1.length() != s2.length()){
        return false;
    }

    unordered_map<char,int> mp;

    for (int i = 0; i < s1.length(); i++)
    {
        mp[s1[i]]++;
        mp[s2[i]]++;
    }
    
    for (auto itr:mp)
    {
        if (itr.second %2 != 0)
        {
            return false;
        }
        
    }
    
    return true;

}

int main()
{

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    check(s1,s2) ? cout<< "YES" : cout<< "NO";
    
    return 0;
}