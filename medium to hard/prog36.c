// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose 
// sum is equal to K.  
// Input: N = 4, K = 6, arr[] = {1, 5, 7, 1} Output: 2

#include<stdio.h>
void main(){
    int n,count=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the k: ");
    scanf("%d",&target);
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                count++;
            }
        }
    }

    printf("count is: %d",count);
}