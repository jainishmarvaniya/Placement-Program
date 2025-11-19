// Find the difference between the second largest element and the second smallest element of an array. 
// Input :  Enter the size of array: 7 
// Enter 7 elements: 5 1 9 7 1 5 3 
// Output: Difference: 4

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

    int diff= secmax-secmin;

    printf("diffrence between second max and min is:%d",diff);

}