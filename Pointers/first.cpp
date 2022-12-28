#include<iostream>
using namespace std;
int main(){
    // int a = 10;
    // cout<<&a<<endl;
    // int *aptr = &a;
    // cout<<aptr<<endl;
    // cout<<&aptr<<endl;
    // cout<<*aptr<<endl;

    int arr[] = {10,20,30};
    int *ptr = arr;
    cout<<*ptr<<endl;
    cout<<*(arr+2)<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    
    return 0;
}