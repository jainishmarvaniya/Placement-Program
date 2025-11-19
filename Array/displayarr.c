//Write a program to input and display elements of an array.

#include<stdio.h>
void main(){
    int n;

    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    for(int i=1;i<=n;i++){
        printf("Enter element %d:",i);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
}