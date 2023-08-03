#include<stdio.h>
int main() {
    int a[3][3] , i , j ,sum;
    printf("Matrix is : ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[3][3]);
        }  
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i==j)
        {
            sum=0;
            sum = sum + a[i][j];
        }

        }
    }
    printf("Sum of diagonal is : ");
    printf("%d",sum);
    
}

//By declaring the array at compile time

// int main() {
//     int a[3][3]={{2,2,3} , {4,6,6} , {7,8,10}} , i , j ,sum=0;
    
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             if (i==j)
//         {
//             sum = sum + a[i][j];
//         }
//         }
//     }
//     printf("Sum of diagonal is : ");
//     printf("%d",sum);
    
// }