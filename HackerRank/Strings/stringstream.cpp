#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ans;
    stringstream ss(str);
    char ch;
    int a;
    while (ss)
    {
        ss>>a>>ch;
        ans.push_back(a);
    }

    return ans;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}