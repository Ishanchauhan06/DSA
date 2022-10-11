// remove duplicate from sorted linked list

#include<bits/stdc++.h>
using namespace std; 


class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }

    return head;
}

Node* removeduplicate(Node* head){
   if(head==NULL){
       return NULL;
   }
   Node* temp = head;
   while (temp->next!=NULL)
   {
      if(temp->data==temp->next->data){
          Node* next_next = temp->next->next;
          Node* repeatnode = temp->next;
          delete(repeatnode);
          temp->next = next_next;
      }else{
      temp = temp->next;
      }
   }
   return head;
}

void display(Node *head)
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
    Node *head = takeinput();
    
    removeduplicate(head);
   display(head);
    return 0;
}