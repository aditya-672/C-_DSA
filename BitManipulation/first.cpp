#include<iostream>
using namespace std;

bool getBit(int num,int pos){
    return ((num & 1<<pos)!=0);
}

int setBit(int num,int pos){
    return (num | 1<<pos);
}

int clearBit(int num,int pos){
    return num & ~(1<<pos);
}

int updateBit(int num,int pos,int value){
    int num1 = (num & ~(1<<pos)); 
    return (num1 | value<<pos);
}

int main(){
    int num = 5;
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(7,3,1)<<endl;
    return 0;
}