//Write a program to insert an element at a specific position in an array.

#include<stdio.h>
void main(){
    int n,pos,val;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n+1];

    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the position to insert(1 to %d): ",n+1);
    scanf("%d",&pos);
    if(pos<0 || pos>n+1){
        printf("Invalid position!");
        return;
    }

    printf("Enter the value to insert: ");
    scanf("%d",&val);

    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;

    printf("Array after insertion: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}