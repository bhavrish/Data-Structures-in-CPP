#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

node *head=NULL;
node *curr;

void push(int data) {
	node *temp = new node;
	temp->data=data;
	if (head==NULL) {
		head=temp;
		curr=head;
	}
	else {
		temp->next=NULL;
		curr->next=temp;
		curr=temp;
	}
}

int pop() {
	node *temp = head;
	int num=temp->data;

	head = head->next;
	delete(temp);
	return num;
}

void display() {
	node *ptr=head;

	while(ptr!=NULL) {
		cout<<ptr->data<<endl;
		ptr=ptr->next;
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
}