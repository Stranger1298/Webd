package LS;

public class max2d {
    public static int search(int[][] arr) {
        int max = arr[0][0];
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {
                if (arr[row][col] > max) {
                    max = arr[row][col];
                    return max;
                }
            }
        }
        return max;
    }

    public static void main(String[] args) {
        int arr[][] = { { 1, 9, 3 }, { 3, 2, 1 },
                { 4, 5, 6 }, { 6, 5, 4 },
                { 7, 8, 9 }, { 77, 9, 45 } };
        System.out.println(search(arr));
    }
}
