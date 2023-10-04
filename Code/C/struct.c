#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
    char grade;
};
void main(){
    int n,i;
    float sum=0,avg=0;
    struct student s1[100];
    printf("Number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter roll: ");
        scanf("%d",&s1[i].roll);
        printf("Enter name: ");
        scanf("%s",&s1[i].name);
        printf("Enter marks: ");
        scanf("%f",&s1[i].marks);
        printf("Enter grade: ");
        scanf(" %c",&s1[i].grade);
        sum+=s1[i].marks; 
    }
    avg=sum/n;
    printf("Average marks: %f",avg);
    printf("Students deatils are: ");
    printf("\n Roll \t\t Name \t\t Marks \t\t Grade \n");
    for(i=0;i<n;i++){
        printf("%d \t\t %s \t\t %f \t\t %c \n",s1[i].roll,s1[i].name,s1[i].marks,s1[i].grade);

    }
    printf("More than average students are: \n");
    printf("Students deatils are: ");
    printf("\n Roll \t\t Name \t\t Marks \t\t Grade \n");
    for(i=0;i<n;i++){
        if (s1[i].marks>avg)
        {
            printf("%d \t\t %s \t\t %f \t\t %c \n",s1[i].roll,s1[i].name,s1[i].marks,s1[i].grade);
        }
    }
    printf("Less than average students are: \n");
    printf("Students deatils are: ");
    printf("Roll \t\t Name \t\t Marks \t\t Grade \n");
    for(i=0;i<n;i++){
        if (s1[i].marks<avg)
        {
            printf("%d \t\t %s \t\t %f \t\t %c \n",s1[i].roll,s1[i].name,s1[i].marks,s1[i].grade);
        }
    }
}