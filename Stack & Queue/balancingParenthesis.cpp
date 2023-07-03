#include<iostream>
#include<stack>

using namespace std;

bool isvalid(string s){
    bool ans = true;
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' or s[i]=='[' or s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == ']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(!st.empty() and st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
    {
        return false;
    }
    
    return ans;
}

int main()
{
    cout<<isvalid("{[(]}")<<endl;
    return 0;
}