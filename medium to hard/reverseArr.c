// Given an array arr[], the task is to reverse the array. Reversing an array means rearranging the elements 
// such that the first element becomes the last, the second element becomes second last and so on. (Do 
// not use any additional Array) 
// Input: arr[] = {1, 4, 3, 2, 6, 5}   
// Output: {5, 6, 2, 3, 4, 1}
#include<stdio.h>
void main(){
    int n;

    printf("Enter the n: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the Elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    
}