#include <stdio.h>
int main () {
    int p , t ,r ,SI;
    printf("enter the p t r\n ");
    scanf("%d,%d,%d",&p,&t,&r);
    SI=(p*t*r)/100;
    printf("simple interest=%f",SI);
    return 0;
}