#include <iostream>

using namespace std;

struct node {
	int data;
	node *prev;
};

node *head=NULL;
node *curr; // curr keeps track of position in the linked list

void push(int data) {
	node *temp = new node;
	temp->data=data;

	if (head==NULL) { // if head is null, push to head
		temp->prev=NULL;
		head=temp;
		curr=head;
	}
	else { // otherwise push to end of linked list
		temp->prev=curr;
		curr=temp;
	};
}

int pop() {
	if (curr!=NULL) {
		node *temp=curr;
		curr=curr->prev;
		int top=temp->data;
		delete(temp);
		return top;
	}
	else {
		cout<<"Stack is empty";
		return 0;
	}
}

void display() {
	node *itr=curr;
	while (itr!=NULL) {
		cout<<itr->data<<endl;
		itr=itr->prev;
	}
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	pop();
	pop();
	pop();
	pop();
	pop();
	display();

	return 0;
}