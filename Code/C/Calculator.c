#include <stdio.h>
#include <conio.h>
int main()
{
    int a , b , operator;
    
    printf("Operator choice : 1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &operator);
    printf("Operands choice :");
    scanf("%d , %d", &a , &b);
    switch (operator)
    {
    case '1':
        printf("Addition = %d", a+b);
        break;
        
    default:
        printf("This is default statement");
    }
    return 0;
}
