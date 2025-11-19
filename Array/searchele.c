//Write a program to search a given element in an array(Linear Search).
#include<stdio.h>
void main(){
    int n,serch;
    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search:");
    scanf("%d",&serch);

    for(int i=0;i<n;i++){
        if(arr[i]==serch){
            printf("Element found at position %d",i+1);
            return;
        }
    }
    printf("Element not found");
}