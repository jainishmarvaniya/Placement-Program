// Write a program to find the second largest and second smallest elements in an array. 

#include<stdio.h>
void main(){
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int secmax=arr[0];
    for(int i=0;i<n;i++){
        if(max>arr[i] && secmax<arr[i]){
            secmax=arr[i];
        }
    }

    printf("second max element is: %d\n",secmax);

     int min=arr[0];

    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int secmin=max;
    for(int i=0;i<n;i++){
        if(min<arr[i] && secmin>arr[i]){
            secmin=arr[i];
        }
    }

    printf("second min element is: %d\n",secmin);

}