#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "abcanbdbcd";    
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i]-'a']++;
    }
    
    string ans = "a";
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = 'a' + i;
        }
    }

    cout<<ans<<maxF<<endl;
    

    return 0;
}