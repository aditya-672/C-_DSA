#include<iostream>
using namespace std;

class node
{
    public:
        
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

int count(node* head){
    int cnt =0;
    node* temp = head;
    while (temp!=NULL)
    {
        /* code */
        temp = temp->next;
        cnt++;
    }

    return cnt;

}

void insertAtBeginning(node* &head,int val){
    node* n = new node(val);

    if (head==NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head = n;

}

void insertAtTail(node* &head,int val){
    node* n = new node(val);

    if (head==NULL)
    {
        head = n;
        return;
    }
    
    node* temp = head;

    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head){
    node* currptr = head;
    node* prevptr = NULL;
    node* nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
    
}

int main(){

    node* head = NULL;

    insertAtBeginning(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    cout<<"Count"<<count(head)<<endl;
    node* newHead = reverse(head);
    display(newHead);
    return 0;   
}