//Write a program to find the sum and average of elements in an array.
#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    for(int i=1;i<=n;i++){
        printf("Enter element %d:",i);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<=n;i++){
        sum=sum+arr[i];
    }

    float avg=(float)sum/n;

    printf("sum is:%d\n",sum);
    printf("average is:%f",avg);
}