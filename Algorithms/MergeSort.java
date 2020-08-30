import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;


public class MergeSort {

    public static void merge(int[] arr, int leftIndex, int middleIndex, int rightIndex) {
        List<Integer> leftArr = new ArrayList<Integer> ();
        List<Integer> rightArr = new ArrayList<Integer>();

        // copy leftArr and rightArr into temporary arrays
        for(int i=leftIndex; i<=middleIndex; i++) {
            leftArr.add(arr[i]);
        }
        for(int j=middleIndex+1; j<=rightIndex; j++) {
            rightArr.add(arr[j]);
        }

        leftArr.add(Integer.MAX_VALUE);
        rightArr.add(Integer.MAX_VALUE);

        int i=0;
        int j=0;
        for(int k=leftIndex; k<rightIndex; k++) {
            if (leftArr.get(i) < rightArr.get(j)) {
                arr[k] = leftArr.get(i);
                i++;
            }
            else {
                arr[k] = rightArr.get(j);
                j++;
            }
        }
    }

    public static void mergeSort(int[] arr, int leftIndex, int rightIndex) {
        if (leftIndex < rightIndex) {
            int middleIndex = (int) Math.floor((leftIndex+rightIndex)/2);
            mergeSort(arr, leftIndex, middleIndex);
            mergeSort(arr, middleIndex+1, rightIndex);
            merge(arr, leftIndex, middleIndex, rightIndex);
        }
    }

    public static void main(String[] args) {
        int[] arr = {5,2,4,7,1,3,2,6};
        mergeSort(arr, 0, 7);
        for(int i=0; i<8; i++) {
            System.out.println(arr[i]);
        }
    }

}
