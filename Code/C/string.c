#include<stdio.h>
#include<string.h>
int main(){
    int flag;
    char name[100]="Aman";
    char name2[100]="Goblin";

//Concat
    int len=strlen(name);
    int len2=strlen(name2);
    // for(int i=0;i<=len2;i++){
    //     name[len+i]=name2[i];
    // }
    // puts(name);

//Compare
    // if (strcmp(name,name2)==0)
    // {
    //     printf("Strings are equal\n");
    // }
    // else if (strcmp(name,name2)>0)
    // {
    //     printf("String 1 is greater than String 2\n");
    // }
    // else if (strcmp(name,name2)<0)
    // {
    //     printf("String 1 is smaller than String 2\n");
    // }
    // else
    // {
    //     printf("Strings are not equal\n");
    // }

   
//Reverse
    for (int i = 0; i<len/2; i++)
    {
        char temp=name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=temp;
    }
    puts(name);
    
    
    return 0;
}