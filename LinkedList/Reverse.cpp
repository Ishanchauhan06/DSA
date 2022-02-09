// Reverse a linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* &head)
{
    Node *prev = NULL; // previous pointer
    Node *curr = head; // current pointer that will pointing towards the prev pointer in each setp so that th elinks will reverse
   
    while (curr!=NULL)
    {
        Node *nxtptr = curr->next;// nxtptr will remember the links of forward linked list 
        curr->next = prev;
        prev = curr;
        curr = nxtptr;
    }
    return prev;                   
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    n1->next = n2;
    Node *n3 = new Node(30);
    n2->next = n3;
    display(head);
    reverse(head);
    display(head);
    return 0;
}
