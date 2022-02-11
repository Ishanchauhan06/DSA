#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* newNode(int d)
{
	Node* temp = new Node;
	temp->data = d;
	temp->next = NULL;
	return temp;
}

bool check(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp=  head;
    while (temp!=NULL)
    {  
        //if cycle present
        if(visited[temp]==true){
            return true;
        } 
        visited[temp] = true;
        temp = temp->next;
    }
    return false;

}

int main()
{
	Node* head = newNode(20);

	// Inserting Node in Linked List
	head->next = newNode(4);
	head->next->next = newNode(5);
	head->next->next->next = newNode(10);

	// Just to make a cycle
	head->next->next = head;

//    check wether loop present or not
	if (check(head))
		cout << "Loop detected.";
	else
		cout << "No Loop Found.";
	cout << endl;

	return 0;
}
