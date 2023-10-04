// #include<stdio.h>
// int main(){
//     FILE *fp1,*fp2;
//     char ch,fname1[100],fname2[100];
//     printf("Enter the name of the first file: ");
//     scanf("%s",&fname1);
//     fp1=fopen(fname1,"r");
//     if (fp1=NULL)
//     {
//         printf("File doen't exist");
//     }
//     else
//     {
//         printf("Enter the name of the second file: ");
//         scanf("%s",&fname2);
//         fp2=fopen(fname2,"w");
//         while ((ch=fgetc(fp1))!=EOF)
//         {
//             fputc(ch,fp2);
//         }
//         printf("File copied successfully");
//         fclose(fp1);
//         fclose(fp2);
//     }
//     return 0;
    
// }


#include<stdio.h>
#include<conio.h>
int main() {
    FILE *fp1 *fp2;
    int ch;
    char fname1[100],fname[100];
    printf("Enter the file name1: ");
    scanf("%s",fname1[100]);
    fp1=fopen(fname1,"r");
    if(fp1==NULL){
        printf("%s doesn't exist",fname1);
    }
    printf("Enter the file name2: ");
    scanf("%s",fname2[100]);
    fp2=fopen(fname2,"w");
    ch=fgetc(fp1);
    while (ch!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("File %s successfully created",fname2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}