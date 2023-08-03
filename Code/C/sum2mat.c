#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}} ,b[3][3]={{1,2,3},{4,5,6},{7,8,9}} , sum=0 , i , j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum = sum + a[i][j] + b[i][j];       
        }
        
    }
    printf("%d",sum);
}