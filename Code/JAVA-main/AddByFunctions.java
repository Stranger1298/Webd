import java.util.Scanner;

public class AddByFunctions {

    public static int Add(int num1,int num2) {
        int sum=num1+num2;
        return sum;
        
    }
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
    int num1=input.nextInt();
    int num2=input.nextInt();
        int sum=Add(num1,num2);
        System.out.println(sum);
    }
}
