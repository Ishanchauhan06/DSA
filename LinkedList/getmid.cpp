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

int  getmid(Node* &head){
    Node* fast = head;
    Node* slow= head;
    while(fast!=NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
   display(head);
   cout<<getmid(head);
return 0;
}