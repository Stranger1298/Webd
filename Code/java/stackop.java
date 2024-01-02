
import java.util.Scanner;

public class stackop {
    public static void main(String[] args) {
        int top = -1;
        int max = 5;
        int Stack[] = new int[max];
        Scanner sc = new Scanner(System.in);
        System.out.println("Choose from menu");
        System.out.println("1.push");
        System.out.println("2.pop");
        System.out.println("3.display");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
                push(Stack, top, max, sc);
                break;
            case 2:
                pop(Stack, top, max);
                break;
            case 3:
                display(Stack, top);
                break;
            default:
                System.out.println("Enter valid choice");
                break;
        }
    }

    static boolean underflow(int top) {
        if (top < 0) {
            System.out.println("stack underflow");
            return true;
        }
        return false;
    }

    static boolean overflow(int top, int max) {
        if (top >= max) {
            System.out.println("stack overflow");
            return true;
        }
        return false;
    }

    static void push(int Stack[], int top, int max, Scanner sc) {
        if (top < max - 1) {
            System.out.println("Enter item to be pushed: ");
            Stack[++top] = sc.nextInt();
        } else {
            if (overflow(top, max)) {
                return;
            }
        }
    }

    static void display(int Stack[], int top) {
        for (int i = 0; i <= top; i++) {
            System.out.print(Stack[i] + " ");
        }
        System.out.println();
    }

    static void pop(int Stack[], int top, int max) {
        if (top >= 0) {
            top--;
        } else {
            underflow(top);
        }
    }
}