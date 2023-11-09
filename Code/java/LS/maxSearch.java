package LS;

public class maxSearch {
    public static int maxLS(int arr[]) {
        int max = Integer.MIN_VALUE;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] >= max) {
                max = arr[i];
            }
        }
        return max;
    }

    public static int minLS(int arr[]) {
        int min = Integer.MAX_VALUE;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] <= min) {
                min = arr[i];
            }
        }
        return min;
    }

    public static void main(String[] args) {
        int arr[] = { 2, 15, 32, 11, 76, 16, 100 };
        System.out.println("The Largest number in the given array is: " + maxLS(arr));
        System.out.println("The Smallest number in the given array is: " + minLS(arr));
    }
}
