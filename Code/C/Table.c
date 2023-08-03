#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("Give a number : ");
    scanf("%d", &i);

        for (int j = 1; j <= 10; j++)
        printf("%d\n" , i*j);

    return 0;
}
