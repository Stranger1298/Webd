#include <stdio.h>
int main()
{
    int a1[5] ,a2[5] ,sumarr[5] ,i=0;
    printf("Enter 5 numbers of arr1 and arr2 each: ");
    for(  ; i < 5; i++)
    {
        scanf("%d\n",&a1[i]);
    }
    for (  ; i < 5; i++)
    {
        scanf("%d\n" ,&a2[i]);
    }
    for (  ; i < 5; i++)
    {
        sumarr[i] = a1[i]+a2[i];
        printf("%d\n" , sumarr[i]);
    }
    
    return 0;
}
