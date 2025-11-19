// Write a program to display unique elements of an array.

#include<stdio.h>
void main(){
    int n;

    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            printf("Unique element is: %d\n", arr[i]);
        }
    }
}