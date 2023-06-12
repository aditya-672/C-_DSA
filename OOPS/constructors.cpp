#include<iostream>
using namespace std;

class student{
    public:

    string name;
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;
    }

    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
        cout<<"Parameterised Constructor"<<endl;
    }   

    student(student &a){
        cout<<"Copy Constructor";
    }
};

int main(){

    student a;
    student b("adi",12,0);
    student c(a);
    return 0;
}