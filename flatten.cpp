#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node* bottom;
    Node(int data){
        this->data = data;
        next = NULL;
        bottom = NULL;
    }

};
// only function code
Node* merge(Node* a, Node* b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    Node* ans;
    
        if(a->data<b->data){
            ans = a;
            ans ->bottom = merge(a->bottom, b);
        }
        else{
            ans = b;
            ans ->bottom = merge(a, b->bottom);
        }
     
    ans -> next==NULL;
     return ans;
}    
    
   
Node *flatten(Node *root)
{
   if(root==NULL || root->next == NULL){
       return root;
   }
 
  return merge(root, flatten(root->next));  
}
