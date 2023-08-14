int fibu(int a) {
    if(a==0) {
        return 0;
    }
    if(a==1) {
        return 1;
    }
    else{
        return fibu(a-1)+fibu(a-2);
    }
}

#include<stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d",fibu(i));
    }
    return 0;
}