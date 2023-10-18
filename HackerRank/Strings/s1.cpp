#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a,b;

    getline(cin,a);
    getline(cin,b);

    cout<<a.length()<< " "<< b.length()<<endl;

    cout<<a+b<<endl;

    char aa = a[0];
    char bb = b[0];

    a[0] = bb;
    b[0] = aa;

    cout<<a<<" "<<b<<endl;

    return 0;
}