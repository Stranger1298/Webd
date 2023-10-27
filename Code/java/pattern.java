public class pattern {
    public static void main(String[] args) {
        // star pattern
        // for (int i = 1; i <= 4; i++) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // inverted star pattern
        // for (int i = 1; i <= 4; i++) {
        // for (int j = i; j <= 4; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // half pyramid pattern
        // for (int i = 1; i <= 4; i++) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print(j);
        // }
        // System.out.println();
        // }
        // alphabets pattern
        char ch = 'A';
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(ch);
                ch++;
            }
            System.out.println();
        }
    }
}
