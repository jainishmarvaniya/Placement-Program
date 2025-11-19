//Write a program to count total even and odd numbers in an array.
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

    int oddcount=0,evencount=0;

    for(int i=1;i<=n;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }

    printf("Number of even elements: %d\n", evencount);
    printf("Number of odd elements: %d\n", oddcount);
}