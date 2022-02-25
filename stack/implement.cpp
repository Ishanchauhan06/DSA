#include<bits/stdc++.h>
using namespace std; 

class Stack{
   int* arr;
   int top;
   int size;
   public:
   Stack(int size){
       this-> size = size;
       arr = new int[size];
       top = -1;
   }
   void push(int ele){
       if(top>=size-1){
           cout<<"stack overflow"<<endl;
       }  
       else{
           top++;
           arr[top] = ele;
       }
   }
   void pop(){
       if(top<=-1){
           cout<<"stack underflow"<<endl;
       }else{
           int del =  arr[top];
           top--;
           cout<<"deleted element is : "<<del<<endl;
       }
   }
   int gettop(){
       return arr[top];
   }
   bool isempty(){
       if(top=-1){
           return true;
       }
       return false;
   }
};
// implementing stack using linked list


class Node{
    public:
   int data;
   Node* next;
};
Node* head;
class Stackll{
    int size=0;
    public:
void push(int key){
       Node* newnode = new Node();
       newnode->data = key;
       newnode -> next = head;
       head = newnode;
       size++;
}
void pop(){
    Node* temp  = head;
     head = head ->next;
     cout<<temp->data<<endl;;
     delete(temp);
     size--;
}
int top(){
  return head -> data;
}
bool isempty(){
     if(size<=0){
         return true;
     }
     return false;
}
};

int main(){
  Stack s(4);
  s.push(2);
  s.push(3);
  s.push(4);
  s.pop();
cout<< s.gettop();
// for ll
 Stackll sr;
   sr.push(2);
   sr.push(4);
   sr.push(5);
   sr.pop();
   sr.pop();
   sr.top();
   sr.pop();
 cout<<  sr.isempty();
return 0;

}