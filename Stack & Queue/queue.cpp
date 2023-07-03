#include<iostream>
using namespace std;

#define n 20

class queue{
    public:

    int* arr;
    int front;
    int back;

    queue(){
        arr = new int[n];

        front = -1;
        back = -1;
    }

    void enqueue(int x){

        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }

        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 or front>back){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 or front>back){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 or front>back){
            return true;
        }
    }

};

int main()
{
    queue q;
    q.enqueue(1);
    cout<<q.peek()<<endl;
    q.enqueue(2);
    q.dequeue();
    q.enqueue(3);
    cout<<q.peek()<<endl;
    q.enqueue(4);
    return 0;
}