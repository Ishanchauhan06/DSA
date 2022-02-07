#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insertathead(node *&head)
{
    cout << "enter the value" << endl;
    int data;
    cin >> data;
    node *newnode = new node(data);
    newnode->next = head;
    head = newnode;
}
void insertattail(node* &head){
    cout << "enter the value" << endl;
    int data;
    cin >> data;
    node *newnode = new node(data);
    node*temp = head;
    while(temp != NULL){
        temp=temp->next;
    }
    temp->next = newnode;
}
void insertatmid(node *&head, int i)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;
    node *newnode = new node(data);
    node *temp = head; 
    int count = 1;
    while (count != i - 1)
    {
        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *n1 = new node(2);
    node *head = n1;
    node *n2 = new node(3);
    n1->next = n2;
    node *n3 = new node(4);
    n2->next = n3;
    node *n4 = new node(5);
    n3->next = n4;
    display(head);
    cout<<endl;
    insertathead(head);
    display(head);
    cout<<endl;
    insertatmid(head, 3);
    display(head);

    
    return 0;
}