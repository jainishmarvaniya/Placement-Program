//Write a program to copy all elements from one array to another array.

#include<stdio.h>
void main(){
    int n;

    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr1[n], arr2[n];

    for(int i=1;i<=n;i++){
        printf("Enter element %d for first array:",i);
        scanf("%d",&arr1[i]);
    }

    for(int i=1;i<=n;i++){
        arr2[i]=arr1[i];
    }

    for(int i=1;i<=n;i++){
        printf("second array element %d is:  %d\n",i,arr2[i]);
    }
}
