#include <iostream>

using namespace std;

int main() {
    int position=0;
    int max = 10;
    int data;
    int* a = new int[max];  // allocated on heap

    while (cin >> data) {
        if (position >= max) {
            max = max * 2;
            int* temp = new int[max]; // create new array
            for (int i=0; i<position; i++) {
                temp[i] = a[i];       // copy values to new array.
            }
            delete [] a;              // free old array memory.
            a = temp;                 // now a points to new array.
        }
        else {
            a[position++]=data;
        }         
    }
}

//--- Write out the array etc.
