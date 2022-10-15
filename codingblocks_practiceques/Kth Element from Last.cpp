#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int d){
		this->data=d;
		this->next=NULL;
	}
};
void buildlist(Node* &head,int data){
	if(head==NULL){
		Node *temp = new Node(data);
		head = temp;
		return;
	}
	Node *c = head;
	while(c->next!=NULL)
	c=c->next;
	Node * temp= new Node(data);
	c->next = temp;
	return;
}

int main() {
	Node *head = NULL;
	int temp1;
	cin>>temp1;
	while(temp1!=-1){
		buildlist(head,temp1);
		cin>> temp1;
	}
	int k;
	cin>>k;
	Node * temp;
	temp=head;
	while(k--){
		temp=temp->next;
	}
	Node * slow = head;
	while(temp!=NULL)
	{
		temp=temp->next;
		slow=slow->next;
	}
	cout<<slow->data<<endl;
	return 0;
}
