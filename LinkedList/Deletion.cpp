//deletion in linkedlist

#include<bits/stdc++.h>
using namespace std; 

class node {
    public:
  int data;
  node* next;
  node(int data){
    this->data = data;
    next = NULL;
  }
};

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }cout<<endl;
}
// deletion function what will delete the data of particular node
void deletenode(node* &head, int key){
    
    node* temp = head ;
    node* prev= NULL;
    // if deleting data is of head
    if(temp != NULL && temp->data == key){
        head = temp->next;
        delete temp;
        return;
    }
    else{
        while (temp!=NULL && temp->data != key)
        {
           prev = temp ;
           temp = temp->next;   
        }
        if(temp==NULL){
            return;
        }
    prev->next = temp->next;
    delete temp;
    }
}

int main(){
 node* n1  = new node(10);
 node* head = n1;
 node* n2 = new node(20);
 n1->next = n2;
 node* n3 = new node(30);
 n2->next = n3;
 node* n4 = new node(40);
 n3->next = n4;
 display(head);
 deletenode(head,40);
 display(head);
 deletenode(head,50);
 display(head);
 return 0;
}