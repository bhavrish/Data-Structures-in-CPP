#include <iostream>

using namespace std;

int arr[20];
int front=0;
int rear=0;

void push(int data) {
	if (rear>=20) {
		cout<<"Queue is full";
	}
	else
		arr[rear++]=data;
}

int pop() {
	int num=arr[front++];
	return num;
}

void display() {
	int itr=front;
	while (itr<rear) { // rear is pointing to 1 after filled array so use < instead of <=
		cout<<arr[itr]<<endl;
		itr+=1;
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