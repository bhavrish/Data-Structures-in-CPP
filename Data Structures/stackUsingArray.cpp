#include <iostream>

using namespace std;

int arr[20];
int position=0;

void push(int data) {
	if (position>=20)
		cout<<"Stack is full";
	else
		arr[position++]=data;
}

int pop() {
	if (position<=0) {
		cout<<"Nothing to pop";
		return 0;
	}
	else {
		int top=arr[position-1];
		position--;
		return top;
	}
}

void display() {
	int itr=position-1;
	while(itr>=0) {
		cout<<arr[itr]<<endl;
		itr--;
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