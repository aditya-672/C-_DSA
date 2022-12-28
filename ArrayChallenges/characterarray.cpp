#include<iostream>
using namespace std;

int main(){

    // simple char array to intialize and print 
    // char arr[100] = "aditya";
    // int i=0;
    // while (arr[i] != '\0')
    // {
    //     cout<<arr[i]<<" ";
    //     i++;
    // }

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    bool flag = false;

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"It is not a palindrome"<<endl;
    }
    else{
        cout<<"It is a palindrome"<<endl;
    }

    return 0;
}