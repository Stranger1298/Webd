package com.company;

import java.util.Scanner;

public class Loop {
    public static void main(String[] args) {
    // 1--->Number of digits in a given number.
  /*      Scanner sc = new Scanner(System.in);
        System.out.println("Give a integer");
        int n = sc.nextInt();
        int count = 0;
        while(n>0) {
           n = n/10;
            count++;
        }
        System.out.println(count);*/

    //2--->Sum of digits in a given number.

    //3--->Reverse a number
       /* Scanner sc = new Scanner(System.in);
        System.out.println("Type the number :");
        int num = sc.nextInt();
        int rev = 0;
        int rev_num = 0;
        while (num>0) {
            rev = num%10;
            rev_num = rev_num *10 +rev;
            num = num/10;
        }
        System.out.println(rev_num);*/

    //4--->Sum of series
       /* int p = 5;
        int ans = 0;
        while(p<=5) {
            if (p % 2 == 0) {
                ans += p;
                p++;
            } else {
                ans -= p;
                p++;
            }
            System.out.println(ans);
        }*/
    //5--->Something raise to the power something
       /*     int a = 2;
            int b = 4;
            int ans = 1;
        for (int i = 1; i <= b; i++) {
            ans = ans*a;
        }
        System.out.println(ans);*/
    //Print the factorial of given number
        Scanner sc = new Scanner(System.in);
        System.out.println("Type any number :");
        int num = sc.nextInt();
        int ans = 1;
        for (int i = 1; i <=num ; i++) {
            ans *=i;
        }
        System.out.println(ans);
    }
}
