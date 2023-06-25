#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;

    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    node *temp = head;

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteHead(node* &head){
    node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

void deleteAtpos(node* &head,int pos){
    if(pos == 1){
        deleteHead(head);
        return;
    }

    int count=1;
    node* temp = head;
    while (temp!=NULL && pos!=count)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next!=NULL){
        temp->next->prev = temp->prev;
    }
    
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    // display(head);
    insertAtHead(head, 10);
    display(head);
    deleteHead(head);
    display(head);

    return 0;
}