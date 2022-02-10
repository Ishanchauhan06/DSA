#include<bits/stdc++.h>
using namespace std; 

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
    this->data = data;
    this->next = NULL; 
    }
};

Node* reverseKNode(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    Node* prev =NULL;
    Node* curr = head;
    Node* nxt = NULL;
    int count =0;
    while(curr!=NULL && count<k){
       nxt = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nxt;
       count++;
    }
    if(nxt!=NULL){
        head->next = reverseKNode(nxt,k);
    }
    return prev;
}

