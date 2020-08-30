# include <iostream>
using namespace std;

class queue {
	int arr[50];
	int top=-1;	

	void push(int val) {
		if (top>=50)
			cout<<"Queue capacity exceeded"<<endl;
		else {
			top++;
			arr[top]=val;
		}
	}

	void pop() {
		if (top<0)
			cout<<
		else {
			
		}
	}

	void display() {

	}

};

int main() {
	queue q0;

}