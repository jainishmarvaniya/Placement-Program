#include<stdio.h>
void main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimum element is: %d",min);
}