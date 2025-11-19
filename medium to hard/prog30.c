// WAP to check whether number is present in array or not (using recursion only) and the function’s syntax 
// is given below 
// int isInArray(int a [], int m); Where int a [] is Array of integer and m is element to be searched.

#include<stdio.h>
int isInArray(int arr[],int size, int m){
      if(size==0){
         return 0;
      }
      else if(arr[size-1]==m){
          return 1;
      }
      else{
           isInArray(arr,size-1,m);
      }
}
void main(){
    int size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size;i++){
        printf("Enter the Elements %d:",i+1);
        scanf("%d",&arr[i]);
    }

     int m;
    printf("Enter the search Elements: ");
    scanf("%d",&m);

    if (isInArray(arr,size,m)){
        printf("NUmber %d is present in Array",m);
    }
    else{
        printf("NUmber %d is Not present in Array",m);
    }

}