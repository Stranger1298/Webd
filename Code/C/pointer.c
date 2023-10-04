#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    float a[100],*ptr,sum=0,std=0,sumstd=0,mean=0;
    int n,i;
    printf("Enter the number of elements of array: ",&a[100]);
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&a[i]);
    }
    ptr=a;
    for ( i = 0; i < n; i++)
    {
        sum+=*ptr;
        *ptr++;
    }
    mean=sum/n;
    for ( i = 0; i < n; i++)
    {
        sumstd+=pow((*ptr-mean),2);
        *ptr++;
    }
    std=sqrt(sumstd/n);
    printf("Sum: %0.3f",sum);
    printf("Mean: %0.3f",mean);
    printf("Standard Deviation: %0.3f",std);
    return 0;
}