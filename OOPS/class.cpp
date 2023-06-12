#include<iostream>
using namespace std;

class student{
    public:
    // string name;
    int age;
    bool gender; 

    void printInfo(){
        // cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};

int main(){
    // student stu;
    // stu.name = "aditya";
    // stu.age = 12;
    // stu.gender = false;
    // stu.printInfo();

    student stu[3];

    for (int i = 0; i < 3; i++)
    {
        // cout<<"Enter name "<<endl;
        // cin>>stu[i].name;
        cout<<"Enter age "<<endl;
        cin>>stu[i].age;
        cout<<"Enter gender"<<endl;
        cin>>stu[i].gender;
    }
    
    for (int i = 0; i < 3; i++)
    {
        stu[i].printInfo();
    }
    
    return 0;
}