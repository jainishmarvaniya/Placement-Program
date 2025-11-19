// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying 
// at most one element.  
// Input: nums = [4,2,3] 
// Output: true 
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array.
#include<stdio.h>
int main(){
    int n,flag=1;
    printf("Enter the n: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i] && a[i+1]>=a[i]){
            // printf("True");
        }
        else if(a[i-1]>a[i] && a[i+1]>=a[i]){
            a[i-1]=a[i]-1;
            // printf("True");
        }
        else{
            flag=0;//printf("False");
        }
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
}