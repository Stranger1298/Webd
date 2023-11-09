import java.util.Scanner;

public class pallindrome {
    public static void ispallindrome() {
        System.out.print("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        int onum = n;
        int nnum = 0;
        while (n != 0) {
            int r = n % 10;
            nnum = nnum * 10 + r;
            n = n / 10;
        }
        if (onum == nnum) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }

    public static void main(String[] args) {
        ispallindrome();
    }
}
