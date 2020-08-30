#include <iostream>
using namespace std; 

struct node {
	public:
		int data;
		node *next;

		node(int data) {
			this->data=data;
			next=NULL;
		}
};

class linkedlist {
	node head(5);

	public:
		void insert(int value, int pos) {
			if (head.next==NULL) {
				head.next.data=value;
				head.next.next=NULL;
			}
			else {
				node *curr_node=head; // curr_node is a ptr that points to each node iteratively.
				for (int i=0; i+1<pos; i++) {
					curr_node=curr_node->next;
				}
				node new_node;
				new_node.data = value;
				new_node.next = curr_node->next;
				curr_node->next = &new_node;
			}
		}

		void del(int pos) {
			if (head==NULL) {
				cout<<"No nodes to delete";
			}
			else {
				node *curr_node=head; 
				for (int i=0; i+1<pos; i++) {
					curr_node=curr_node->next;
				}
				curr_node->next = curr_node->next->next;
			}
		}

		void display() {
			if (head==NULL) {
				cout<<"Nothing in linked list";
			}
			else {
				node *curr_node=&head;
				while (curr_node!=NULL) {
					cout<<curr_node->data<<"->";
					curr_node=curr_node->next;
				}
			}
		}

		//void reverse() {
		//	if (head==NULL) {
		//		head.data=value;
		//		head.next=NULL;
		//	}
		//	else {
		//		for (node curr_node=head, int i=0; i+1<pos; curr_node=curr_node.next) {
		//			i++;
		//		}
		//		node new_node;
		//		new_node->data = value;
		//		new_node->next = curr_node.next;
		//		curr_node->next = new_node;
		//	}
	//	}
};

