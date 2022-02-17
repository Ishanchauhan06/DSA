#include<bits/stdc++.h>
using namespace std; 


class Node{
    public:
  int data;
  Node* next;
  Node(int data){
    this->data = data;
    next = NULL;   
  }
};
Node* takeInput(){
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cin>>data;
    
    while(data!=-1){
     Node* newnode = new Node(data);
      if(head==NULL){
          head = newnode;
          tail = newnode;
      }
      else{
         tail->next = newnode;
         tail = tail->next;
      }
      cin>>data;
    }
    return head;
}
// time complexity is O(n^2)  space O(n)
Node* removedupliunsorted(Node* head){
    if (head==NULL)
    {
        return NULL;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
        Node* curr = temp;
        while (curr->next!=NULL)
        {
            if(temp->data==curr->next->data){
                Node* next_next = curr->next->next;
                Node* nodetodelete = curr->next;
                delete(nodetodelete);
                curr->next = next_next;
            }else{
                curr=curr->next;
            }
           
        }
         temp = temp->next;
    }
    
    return head;
}

void display(Node* &head){
    Node* temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
int main(){
   Node* head = takeInput();
   removedupliunsorted(head);
   display(head);
return 0;
}