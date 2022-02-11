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
bool checkcycle(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while (slow!=NULL && fast!=NULL){
      fast = fast->next;
      if(fast!=NULL){
          fast= fast->next;
      }
      slow=slow->next;
      if(fast == slow){
         return true;
      }
    }
   return false;
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
    // step to create a cycle
     head->next->next = head;
    // function call to check cycle present or not
    if(checkcycle(head)){
        cout<<"cycle is present"<<endl;
    }else{
        cout<<"Not cyclic"<<endl;
    }
    //  display(head);
    return 0;
}