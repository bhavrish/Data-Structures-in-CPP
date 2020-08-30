#include <iostream>
using namespace std; 

// Notes:
// 1) LIFO Structure
// 2) Implemented with arrays

class stack {
   int arr[50]; 
   int top=-1;

   public:
      void push(int val) { // Add to end of array and INCREMENT top
         if(top>=50)
            cout<<"Stack capacity exceeded"<<endl; 
         else {
            top++;
            arr[top]=val;
         }
      }
      void pop() { // Remove from end of array, and DECREMENT top
         if(top<0)
            cout<<"No more items to delete"<<endl;
         else {
            cout<<"The popped element is "<< arr[top] <<endl;
            top--;
         }
      }
      void display() { // Never change value of top unless pushing or popping, so set i to top, and iterate down the stack. 
         if(top>=0) {
            cout<<"Stack elements are:";
            for(int i=top; i>=0; i--)
               cout<<arr[i]<<" ";
               cout<<endl;
         } 
         else
            cout<<"Stack is empty";
      }
};

int main() {
   int num, val;
   stack s0;
   cout<<"Press 1 to Push"<<endl;
   cout<<"Press 2 to Pop"<<endl;
   cout<<"Press 3 to Display"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>num;
      switch(num) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s0.push(val);
            break;
         }
         case 2: {
            s0.pop();
            break;
         }
         case 3: {
            s0.display();
            break;
         }
         default: {
            cout<<"Exit"<<endl;
            break;
         }
      }
   }while(num!=4); 
   
   return 0;
}