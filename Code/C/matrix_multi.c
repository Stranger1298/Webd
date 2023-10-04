#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int m,n,p,q,i,j,k;
    int arr1[10][10],arr2[10][10],arr3[20][20];
    printf("Enter the order of Matrix 1: ");
    scanf("%d %d",&m,&n);
    printf("Enter the order of Matrix 2: ");
    scanf("%d %d",&p,&q);
    if (n!=p)
    {
        printf("Multiplication not allowed");
    }
    else{
        printf("Elements of matrix 1: ");
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                scanf("%d",&arr1[i][j]);
            }   
        }
        printf("Elements of matrix 2: ");
        for ( i = 0; i < p; i++)
        {
            for ( j = 0; j < q; j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }
        
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                arr3[i][j]=0;
                for ( k = 0; k < n; k++)
                {
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
                
            }
        }
        printf("Maltiplication matrix: ");
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                printf("%d",arr3[i][j]);
                printf("\n");
            }
            printf("\n");
            
        } 
    }
    return 0;   
}