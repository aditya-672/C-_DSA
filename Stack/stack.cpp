#include<iostream>
using namespace std;

#define n 100

class stack{

    public:

    int* arr;
    int top;

    stack(){
       arr = new int[n]; 
       top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;

    }

    void pop(){
        if (top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    void Top(){
        if (top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }
    
    bool empty(){
       return top==-1;
    }

};

int main()
{
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.Top();
    st.pop();
    cout<<st.empty()<<endl;
    st.Top();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    return 0;
}