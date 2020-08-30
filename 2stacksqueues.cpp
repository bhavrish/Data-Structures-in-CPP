// 2 queues for stack
// so you basically move everything from queue 1 to queue 2 except for the last element and then pop the last elem while also returning it

// 2 stacks for queue
// push to first stack, then pop and push into second stack. Finally pop from second stack

#include <iostream>
#include <stack>

using namespace std;

class queue {
	public:
		stack s1, s2;

		void insert(int data) {
			s1.push(data);
			int newdata = s1.pop();
			s2.push(newdata);
		}

		int remove() {
			s2.pop();
		}

};

int main() {
	queue q1;
	q1.insert(5);
	q1.insert(10);
	q1.insert(15);
	q1.insert(20);
	q1.insert(25);
	cout<<q1.remove();
	cout<<q1.remove();
	cout<<q1.remove();
	cout<<q1.remove();
	cout<<q1.remove();
}