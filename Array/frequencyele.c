// Write a program to find the frequency of each element in an array. 

#include<stdio.h>
void main(){
    int n,count=1,temp;

    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
    
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            printf("Frequency of %d is: %d\n",arr[i],count);
            count=1;
        }
    }


}