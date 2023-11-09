package Patterns;

public class invPyramid {
    public static void patt(int row, int col) {
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row - 1; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        patt(5, 5);
    }
}
