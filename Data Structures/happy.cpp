#include <iostream>
#include <vector>
using namespace std;

// Write an algorithm to determine if a number is "happy".

// A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its 
// digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers 
// for which this process ends in 1 are happy numbers.
// Input: 19
// Output: true
// Explanation: 
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1

int main() {
	cout<<"Enter number";
	int num;
	cin>>num;
	int flag=1;
	vector<int> v1;
	vector<int>::iterator ptr;

	do {
		int temp=num;
		num=0;
		for (; temp!=0; temp/=10) { // replaces number with sum of squares of its digits
			num+=(temp%10);
		}
		cout<<num;
		for(ptr = v1.begin(); ptr != v1.end(); ptr++) { // check if number is already in vector, otherwise append to vector
			if (*ptr==num)
				flag=0;
			else
				v1.push_back(num);

		}

		if (flag==0)
			break;
		
	} while(num!=1);
	
	if (flag==0)
		cout<<"Number is not happy.";
	else
		cout<<"Number is happy.";
	return 0;
}