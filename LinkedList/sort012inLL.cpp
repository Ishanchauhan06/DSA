#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data = data ;
        next = NULL;
    }
};

Node* takeinput(){
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
      tail->next= newnode ;
      tail = tail -> next; 
    }
    cin>>data;
    }
    return head;
}
// sort 0, 1, 2
Node* sortll(Node* head){
   if(head==NULL){
       return NULL;
   }
   int zerocnt =0 ;
   int onecnt = 0;
   int twocnt = 0;
   Node* temp = head;
   while (temp!=NULL)
   {
       if(temp->data==0){
           zerocnt++;
       }else if(temp->data == 1){
           onecnt++;
       }else if(temp->data == 2){
           twocnt++;
       }
       temp = temp ->next;
   }
   temp = head;
  while (temp!=NULL)
  {
    if(zerocnt!=0){
        temp->data = 0;
        zerocnt--;
    }else if(onecnt!=0){
        temp->data =1;
        onecnt--;
    } else if(twocnt != 0){
        temp->data = 2;
        twocnt--;
    }
    temp = temp -> next;
  }
  
  return head;  
}

void display(Node* head){
    Node* temp = head ;
   while(temp != NULL){
       cout<<temp->data<<" ";
       temp = temp->next;
   }cout<<endl;
}

int main(){
  Node* head = takeinput();
  display(head);
  sortll(head);
  display(head);
return 0;
}