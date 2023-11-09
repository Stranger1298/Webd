import java.util.Scanner;

public class Function {
    public static int sum(int a, int b) { // Formal parameters,Parameters
        int sum = a + b;
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number a: ");
        int a = sc.nextInt();
        System.out.print("Enter number b: ");
        int b = sc.nextInt();
        System.out.print("The sum of a and b : ");
        int result = sum(a, b); // Arguments,Actual parameters
        System.out.println(result);
        sc.close();
    }
}
