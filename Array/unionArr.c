// Write a program to find the union of two arrays.

#include<stdio.h>
void main(){
    int n1,n2;
    printf("Enter the number of elements in array 1: ");
    scanf("%d",&n1);
    int arr1[n1];

    for(int i=0;i<n1;i++){
        printf("Enter element %d of array 1: ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter the number of elements in array 2: ");
    scanf("%d",&n2);

    int arr2[n2];
    for(int i=0;i<n2;i++){
        printf("Enter element %d of array 2: ",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("Union of the two arrays is: ");
    for(int i=0;i<n1;i++){
        printf("%d  ",arr1[i]);
    }
     
    for(int i=0;i<n2;i++){
        int found = 0;
        for(int j=0;j<n1;j++){
            if(arr2[i]==arr1[j]){
                found = 1;
                break;
            }
        }
        if(found==0){
            printf("%d  ",arr2[i]);
        }
    }
    printf("\n");
}
