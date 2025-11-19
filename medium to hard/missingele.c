//wap to find missing element in array.
#include<stdio.h>
void main(){
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter elements: ");
        scanf("%d",&arr[i]);
    }
     
    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        total-=arr[i];
    }

    printf("missing Elements is: %d",total);
}