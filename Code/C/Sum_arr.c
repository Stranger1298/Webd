#include <stdio.h>
int main()
{
    int a[3][3] , i , j ,sumr,sumc;
    printf("Matrix is: ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for ( i = 0; i < 3; i++)
    {
        sumr = sumc = 0;
        for ( j = 0; j < 3; j++)
        {
            sumr = sumr + a[i][j];
            sumc = sumc + a[i][j];
            
        }
        printf("Sum of row : ");
        printf("%d\n",sumr);
    }
    printf("Sum of col : ");
    printf("%d\n",sumc);
    return 0;
}
