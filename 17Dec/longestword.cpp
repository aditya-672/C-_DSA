#include <iostream>
// #include<algorithm>
#include <string>

using namespace std;

int longest(string str)
{
    int length = str.length();
    int temp = 0, newLen = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            newLen++;
        }
        else
        {
            temp = max(newLen, temp);
            newLen = 0;
        }
    }

    return max(temp,newLen);
}

int main()
{

    string str = "this is adi padi madi";

    cout << "MAX :" << longest(str);

    return 0;
}