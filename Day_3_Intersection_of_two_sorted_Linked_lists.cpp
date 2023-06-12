#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}


Node* findIntersection(Node* h1, Node* h2)
{
    // Your Code Here
    Node* n = new Node(0);
    Node*x = n;
    
    while(h1!=NULL && h2!=NULL){
    if(h1->data == h2->data){
        x->next = new Node(h1->data);
        x = x->next;
        h1 = h1->next;
        h2 = h2->next;
    }
    else if(h1->data < h2->data) 
        h1 = h1->next;
    else 
        h2 = h2->next;
    }
    return n->next;
}