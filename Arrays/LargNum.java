import java.util.*;

public class LargNum {

    public static void main(String args[]){

        int arr1[] = {2, 5, 1, 3, 0};
        System.out.println("Largest elm in arr is: " + sort(arr1));
        System.out.println("Largest elm in arr is: " + findLargElm(arr1));
    }

    static int sort(int arr[]){
        Arrays.sort(arr);
        return arr[arr.length - 1];
    }

    static int findLargElm(int[] arr){
        int max = arr[0];

        for (int j : arr) {
            if (j > max) {
                max = j;
            }
        }
        return max;
    }

}
