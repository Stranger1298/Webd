#include<stdio.h>
int main() {
    int arr[100],n,i,low,high,mid,flag=0,target;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    printf("Enter the target: ");
    scanf("%d",&target);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    high=n-1;
    low=0;
    while(low<=high){
        mid=(high+low)/2;
        if (target==arr[mid])
        {
            flag=1;
            break;
        }
        else if (target<arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }   
    if (flag==1)
        {
            printf("Position=%d",mid+1);
        }
        else{
            printf("Not found");
        }   
}