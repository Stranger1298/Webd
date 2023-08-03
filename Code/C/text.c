#include <stdio.h>
int main() {
    int i=0,even=0, odd=0, arr[7];
    for( ; i < 7; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
        if (arr[i] % 2 == 0)
         even++;
        else
         odd++;
    }
        printf("Total odd numbers are: %d\n",odd);
         printf("Total even numbers are: %d\n",even);   

    return 0;
}