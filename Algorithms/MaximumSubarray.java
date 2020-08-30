package com.company;

public class MaximumSubarray {

    public static int middleMax(int[] arr, int leftIndex, int middleIndex, int rightIndex) {
        int leftSum = Integer.MIN_VALUE;
        int rightSum = Integer.MIN_VALUE;
        int tempSum = 0;
        for(int i=middleIndex; i >= leftIndex; i--) { // find the greatest possible sum in left most array
            tempSum += arr[i];
            if(tempSum > leftSum)
                leftSum = tempSum;
        }
        tempSum = 0;
        for(int j=middleIndex; j <= rightIndex; j++) { // find the greatest possible sum in right most array
            tempSum += arr[j];
            if(tempSum > rightSum)
                rightSum = tempSum;
        }

        return leftSum + rightSum;
    }

    public static int maxSubarr(int[] arr, int leftIndex, int rightIndex) {
        if (rightIndex <= leftIndex)
            return arr[rightIndex]; // could return rightIndex or leftIndex since only 1 elem left in array
        int middleIndex = (leftIndex + rightIndex)/2;
        int sumLeft = maxSubarr(arr, leftIndex, middleIndex);
        int sumRight = maxSubarr(arr, middleIndex+1, rightIndex);
        int sumInBetween = middleMax(arr, leftIndex, middleIndex, rightIndex);
        return Math.max(Math.max(sumLeft, sumRight), sumInBetween);
    }

    public static void main(String[] args) {
        int[] arr = {1,-5,4,2,-7,3,6,-1,2,-4,7,-10,2,6,1,-3};
        System.out.print(maxSubarr(arr, 0, 15));
    }
}
