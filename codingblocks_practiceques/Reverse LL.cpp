#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node();
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
	~Node();
	
};
void buildlist(Node* &head,int data){
	if(head==NULL){
		Node *temp=new Node(data);
		head = temp;
		return;
	}
	Node* temp = head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next = new Node(data);
	return;
}

Node* rev(Node* head,int k){
	Node* current = head;
	Node* prev = NULL;
	Node* next = NULL;
	int count = 0;
	while(current!= NULL and count<k){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}
	if(next!=NULL)
		head->next = rev(next,k);
	return prev;
}
int main() {
	int n,k;
	cin>>n>>k;
	Node* head = NULL;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		buildlist(head,temp);
	}
	head = rev(head,k);
	Node* c = head;
	while(c!=NULL){
		cout<<c->data<<" ";
		c=c->next;
	}

	return 0;
}
