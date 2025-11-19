// Write a program to merge two arrays into a single array. 
#include<stdio.h>
void main(){
    int n1,n2;

    printf("Enter number of elements in first array: ");
    scanf("%d",&n1);

    printf("Enter number of elements in second array: ");
    scanf("%d",&n2);
    int arr1[n1],arr2[n2],mergedArr[n1+n2];

    for(int i=0;i<n1;i++){
        printf("Enter element %d of first array: ",i+1);
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<n2;i++){
        printf("Enter element %d of second array: ",i+1);
        scanf("%d",&arr2[i]);
    }


    for(int i=0;i<n1;i++){
        mergedArr[i]=arr1[i];
    }

    for(int i=0;i<n2;i++){
        mergedArr[n1+i]=arr2[i];
    }

    printf("Merged array elements are: \n");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",mergedArr[i]);
    }   
}

