import java.util.Scanner;

public class prime_check {
    // public static boolean isprime(int a) {
    // if (a == 2) {
    // return true;
    // }
    // for (int i = 2; i <= a - 1; i++) {
    // if (a % i == 0) {
    // return false;
    // }

    // }
    // return true;

    // }
    // More optimised loop
    public static boolean isprime(int a) {
        if (a == 2) {
            return true;
        }
        for (int i = 2; i <= Math.sqrt(a); i++) {
            if (a % i == 0) {
                return false;
            }

        }
        return true;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println(isprime(a));
        sc.close();
    }
}
