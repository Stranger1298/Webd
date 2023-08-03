#include<stdio.h>
int main() {
    int a[3][3] , b[3][2] , c[3][3] , i , j , k , sum=0;
    printf("Enter 1st matrix :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("Enter 2nd matrix :\n");
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
        for ( j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
       printf("\n"); 
    }
    printf("2nd matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d",b[i][j]);
        }
       printf("\n"); 
    }
    printf("Multiple of 1st and 2nd matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
                c[i][j]=sum;
            }
            
        }
        
    }
    printf("%d",c[i][j]);
    
}