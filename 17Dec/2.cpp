// #include <iostream>
// #include <unordered_map>

// char firstNonRepeatingChar(const std::string& str) {
//     std::unordered_map<char, int> charCount;

//     // Count occurrences of each character in the string
//     for (char ch : str) {
//         charCount[ch]++;
//     }

//     // Find the first non-repeating character
//     for (char ch : str) {
//         if (charCount[ch] == 1) {
//             return ch;
//         }
//     }

//     // If no non-repeating character found, return a default character (e.g., '\0')
//     return '\0';
// }

// int main() {
//     std::string input = "hello";
//     char result = firstNonRepeatingChar(input);

//     if (result != '\0') {
//         std::cout << "First non-repeating character is: " << result << std::endl;
//     } else {
//         std::cout << "No non-repeating character found" << std::endl;
//     }

//     return 0;
// }


#include<iostream>
#include<map>


using namespace std;

int main(){

    string str = "GeeksforGeeks";

    map<char,int> maps;

    for (int i = 0; i < str.length(); i++)
    {
        maps[str[i]]++;
    }

    for (auto ele:maps)
    {
        if (ele.second == 1)
        {
            cout<<ele.first<<endl;
            continue;  
        }
    }

    return 0;
}