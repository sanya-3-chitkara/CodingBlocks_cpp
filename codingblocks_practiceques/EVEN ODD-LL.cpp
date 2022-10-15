#include<iostream>
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
void create(Node* &head,int data){
	if(head==NULL){
		head = new Node(data);
		return;
	}
	Node * c = head;
	while(c->next!=NULL)
	c = c->next;
	c->next = new Node(data);
	return;
}

Node* evenodd(Node* head){
	Node* odd = NULL;
	Node* even = NULL;
	Node* temp = head;
	while(temp!=NULL){
		if(temp->data%2==0)
		create(even,temp->data);
		else
		create(odd,temp->data);
		temp=temp->next;
	}
	temp = odd;
	while(temp->next!=NULL)
	temp = temp->next;
	temp->next = even;
	return odd;
}
int main() {
	int n;
	cin>>n;
	Node* head = NULL;
	while(n--){
		int a;
		cin>>a;
		create(head,a);
	}
	head = evenodd(head);
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	return 0;
}
