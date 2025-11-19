//Write a program to count the total number of duplicate elements in an array. 
#include<stdio.h>
void main(){
     int n,count=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               arr[j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            count++;
        }
    }

    printf("Total dublicate Element is: %d",count);
}