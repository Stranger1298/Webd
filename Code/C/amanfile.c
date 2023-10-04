#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr1,*fptr2;
    char filename[100],c;
    printf("Enter file 1\n");
    scanf("%s",filename);
    fptr1 = fopen(filename,"r");;
    if(fptr1==NULL){
        printf("Cannot open this file\n");
        exit(0);;
    }
    printf("Enter the file 2");
    scanf("%s",filename);
    fptr2 = fopen(filename,"w");
    if(fptr2==NULL){
        printf("Cannot open this file\n");
        exit(0);
    }
    c = fgetc(fptr1);;
    while(c!=EOF){
        fputc(c,fptr2);
        c = fgetc(fptr1);
    }
    printf("Copied!!");
    fclose(fptr2);
    fclose(fptr1);
    return 0;
}