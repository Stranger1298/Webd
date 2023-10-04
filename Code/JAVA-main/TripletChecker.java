import java.util.Scanner;

public class TripletChecker {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.print("Enter three numbers : ");
        int a=input.nextInt();
        int b=input.nextInt();
        int c=input.nextInt();
        pythagorusChecker(a, b, c);

    }

    public static void pythagorusChecker(int p , int q , int r) {
        if (p*p + q*q == r*r) {
            System.out.printf("Yes this is pythagorean triplet" );
        } else {
            System.out.printf("No this is not pythagorean triplet" );
        }   
        return;
    }
}
