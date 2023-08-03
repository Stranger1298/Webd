#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    char opr;
    printf("Welcome to C calculator \n");
    printf("Enter two numbers : ");
    scanf("%d , %d",&num1 ,&num2);
    opr=printf("Choose the sign : +  - *  / \n");
    scanf("%c", opr);
    
    return 0;
}