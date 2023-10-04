#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float a,b,c,r1,r2,d;
    printf("Enter the coefficients a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0||b==0||c==0){
        printf("Invalid input");
    }
    else{
        d=(b*b)-(4*a*c);
    }
    if(d>0){
        printf("Roots are real and distinct: ");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Root 1=%f",r1);
        printf("Root 2=%f",r2);
    }
    else if(d==0){
        printf("Roots are real and equal: ");
        r1=r2=-b/(2*a);
        printf("Root 1=%f",r1);
        printf("Root 2=%f",r2);
    }
    else{
        printf("Roots are real and imaginary: ");
        r1=(-b+sqrt(fabs(d)))/(2*a);
        r2=(-b-sqrt(fabs(d)))/(2*a);
        printf("r1=%f+i%f",r1,r2);
        printf("r2=%f-i%f",r1,r2);
    }
}