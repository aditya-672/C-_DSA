#include<iostream>
#include<string>

using namespace std;

void rev(string str){
    if(str.length() == 0){
        return;
    }
    string result = str.substr(1);

    rev(result);
    cout<<str[0]<<endl;
}

int main(){
    string str = "binod";
    rev(str);
    return 0;
}