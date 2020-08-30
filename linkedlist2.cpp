#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

node *head=NULL;
node *tail=NULL;

void add(int data) {
	node *temp = new node;
	temp->data=data;
	temp->next=NULL;

	if (head==NULL) {
		head=temp;
		tail=head;
	}
	else {
		tail->next=temp;
		tail=temp;
	}
}

void removeBeginning() {
	node *temp = head;
	head=head->next;
	delete(temp);
}

void removeMiddle(int pos) {
	node *itr=head;
	int x;
	while (x<=pos) {
		itr=itr->next; // 1 .2. 3 4 5
	}
	node *temp=itr->next;
	itr->next=itr->next->next;
	delete(temp);
}

void removeEnd() {
	node *temp = tail;
	node *itr=head;
	while(itr->next!=tail) {
		itr=itr->next;
	}
	tail=itr;
	delete(temp);
}

void display() {
	node *itr=head;
	while (itr!=NULL) {
		cout<<itr->data;
		itr=itr->next;
	}
}

void reverse() {
	node *itr=head;
	node *itr2=itr->next;
	while (itr2!=NULL) {
		itr->next=itr2->next;
		itr2->next=itr;
		itr=itr->next;
		itr2=itr->next->next;
	}
    
}


void clear() {
	node *temp = head;
	node *itr = head;
	while (itr!=NULL) {
		itr=itr->next;
		delete(temp);
		if (itr!=NULL) {
			temp=itr;
			delete(temp);
		}
	}
}

int main() {
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	display();
	cout<<endl;
	//clear();
	reverse();
	display();
	return 0;
}
