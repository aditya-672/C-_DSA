#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Inserting a node at tail

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Displaying the linked list

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

// Inserting node at the head

void insertAtBeginning(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

// Counting the number of elements in the linked list

int count(node *head)
{
    int c = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}

// searching if given element is present or not

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// deleting a node by its value

void deletion(node *&head, int val)
{
    node *temp = head;

    if (temp->data == val)
    {
        node *todelete = temp;
        temp = temp->next;
        delete todelete;
        return;
    }

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;

    temp->next = temp->next->next;

    delete todelete;
}

// reversing a linked list

node *reverse(node *head)
{
    node *previousptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }

    return previousptr;
}

// appending last k nodes to head

int lenght(node* head){
    int l = 0;
    node* temp = head;

    while (temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node* appendK(node* &head,int k){
    node* tail = head;
    node* newhead;
    node* newtail;

    int l = lenght(head);
    k=k%l;
    int count = 1;

    while (tail->next!=NULL)
    {
        if(count == l-k){
            newtail = tail;
        }
        if(count == l-k+1){
            newhead = tail;
        }
        tail = tail->next;
        count++;    
    }
    newtail->next = NULL;
    tail->next = head;

    return newhead;
     
}

int main()
{

    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtBeginning(head, 10);
    display(head);
    // deletion(head, 3);
    // node *newhead = reverse(head);
    // display(newhead);
    // cout<<"The number of items : "<<count(head)<<endl;
    // cout<<"Search Result : "<<search(head, 20)<<endl;
    node* newhead = appendK(head,3);
    display(newhead);

    return 0;
}