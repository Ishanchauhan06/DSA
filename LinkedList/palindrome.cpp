#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
 int data;
 Node* next ;
 Node(int data){
    this->data = data;
    next ==NULL;
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
Node* getmid(Node* head){
    Node* slow =head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* reverse(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* prev =NULL;
    Node* curr = head;
    Node* nextptr = NULL;
    while(curr!=NULL){
        nextptr = curr->next;
        curr->next =prev;
        prev= curr;
        curr=nextptr;
    }
    return prev;
}
bool ispalindrome(Node* head){
   if(head->next==NULL){
       return true;
   }
  Node* middle = getmid(head);
  middle->next = reverse(middle->next);
  Node* head1 = head;
  Node* head2 = middle->next;
  while(head2!=NULL){
      if(head1->data != head2 ->data){
      return false;
      }
    head1 = head1->next;
    head2 = head2 ->next;    
  }
  return true;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
int main(){
 Node* head = takeinput();
 (ispalindrome(head))?cout<<"true":cout<<"false";
return 0;
}