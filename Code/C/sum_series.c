int fact(int a) {
    if(a==0 || a==1) {
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

#include<stdio.h>
int main() {
    int n;
    float sum;
    printf("Enter value of n: ");
    scanf("%d",&n);
     for (int i = 1; i <= n; i++) {
        sum += 1.0 / fact(i);
    }
    printf("%f",sum);
    return 0;
}