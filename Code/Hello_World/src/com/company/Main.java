package com.company;

import static java.lang.System.*;

public class Main {

    public static void main(String[] args) {
        out.println("Hello Dost");
        int var1 = 4;
        int var2 = 5;
        int temp = var1;
        var1 = var2;
        var2 = temp;
        out.println(var1);
        out.println(var2);
    }
}
