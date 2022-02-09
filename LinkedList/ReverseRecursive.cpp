
#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	int data;
	Node *next;
    Node(int data){
        this-> data = data;
        next = NULL;
    }
};
 
Node  *takeInput(){
  int data;
  cin>> data;
  Node* head = NULL;
  Node* tail = NULL;
  while (data != -1){
   Node* newNode = new Node(data);
    if (head == NULL){
     head = newNode;
     tail = newNode;
    }
    else{
      tail -> next = newNode;
      tail = tail ->next;
    }
    cin>>data;
  }
 
   return head;
}

Node* recursive(Node* &head){
    if(head==NULL|| head->next == NULL){
        return head;
    }
    Node* smallpart = recursive(head->next);
    head->next->next = head;
    head->next = NULL ;
    return smallpart;
}

void display(Node* &head){
     Node* temp = head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp = temp->next;
     }cout<<endl;
}

/* Driver code*/
int main()
{
	Node* head = takeInput();
	cout<<"Current Node is: "<<endl;
    display(head);
	Node* newhead = recursive(head);
    cout<<"recursive list is: "<<endl;
    display(newhead);

	return 0;
}



