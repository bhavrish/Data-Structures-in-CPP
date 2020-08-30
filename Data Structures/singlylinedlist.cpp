#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

class linked_nodes {
	node *head;

	linked_nodes(int data) {
		head->data=data;
		head->next=NULL;
	}

	void add_beginning(int data) {
		node *temp = new node;
		temp->data=data;
		temp->next=head;
		head=temp;
	}

	void add_pos(int data, int pos) {
		node *prev = head;
		node *curr = head->next;
		for(int i=0;i<pos;i++) {
			prev=prev->next;
			curr=curr->next;
		}

		node *temp = new node;
		temp->data=data;
		temp->next=curr->next;
		prev->next=temp;
	}

	void add_end(int data) {
		node *curr = head;
		while (curr->next!=NULL) {
			curr = curr->next;
		}
		node *temp = new node;
		temp->data=data;
		curr->next = temp;
	}

	void remove_end() {
		node *curr = head;
		while (curr->next->next!=NULL) {
			curr=curr->next;
		}

		curr->next=NULL;
	}

	void remove_beginning() {

	}

	void remove_pos(int pos) {
	
	}
};