package com.company;

public class HeapSort {

    void heapfiy(int startingIndex, int arr[]) {
        int largest = 0;
        if(arr[startingIndex * 2] < arr[startingIndex])
            largest = startingIndex;
        else
            largest = startingIndex * 2;
        if (largest <= startingIndex * 2 + 1)
            largest = startingIndex * 2 + 1;
        
    }

    void buildHeap(int[] arr) {
        heapfiy()
    }

    public static void main(String[] args) {

    }
}
