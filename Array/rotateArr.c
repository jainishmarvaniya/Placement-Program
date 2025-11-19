// Write a program to rotate array elements to the left or right.

#include<stdio.h>
void main(){
    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n],temp,direction;

    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter direction (0 for left, 1 for right): ");
    scanf("%d",&direction);

    if(direction==0){
        temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;

        printf("Array after left rotation: ");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else if(direction==1){
        temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;

        printf("Array after right rotation: ");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else{
        printf("Invalid direction input.\n");
    }
}