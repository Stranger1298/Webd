#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    printf("Enter num1 :");
    scanf("%d", &num1);
    printf("Enter num2 :");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("The sum is :%d", sum);
    
    // float radius;
    // printf("Write the radius :");
    // scanf("%f", &radius);
    // printf("The area is :%f", 3.14*radius*radius);

    // int a = 10.6;
    // int b = 3.5;
    // printf("%d",a%b);

    // int a = 3 , b = 4;
    // printf("%d",10 | 5);
    return 0;
}