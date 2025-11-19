// Given two integer arrays nums1 and nums2, return an array of their intersection.  
// Each element in the result must appear as many times as it shows in both arrays and you may return the 
// result in sorted order. 
#include<stdio.h>

void sortArray(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n1, n2;
    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    for(int i=0; i<n1; i++){
        printf("Enter element %d of array 1: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    for(int i=0; i<n2; i++){
        printf("Enter element %d of array 2: ", i+1);
        scanf("%d", &arr2[i]);
    }
    
    int result[n1];
    int count = 0;
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                result[count++] = arr1[i];
                arr2[j] = -1;
                break;
            }
        }
    }
    sortArray(result, count);
    
    printf("Intersection of the two arrays is: ");
    for(int i=0; i<count; i++){
        printf("%d  ", result[i]);
    }
    printf("\n");
    
    return 0;
}

