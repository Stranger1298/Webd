#include <stdio.h>
int main() {
    int a[3][2] , b[3][2] , i , j , c[3][2];
    printf("Enter 1st matrix of 3x2 :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix of 3x2 :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    

    printf("Sum of 1st and 2nd matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d/t",c[i][j]);
        }
        printf("\n");
    }
}