// Given an array of positive integers arr[] of size n, the task is to find the second largest distinct element in 
// the array. 
// Note: If the second largest element does not exist, return -1. 
// Input: arr[] = [12, 35, 1, 10, 34, 1] 
// Output: 34 
// Explanation: The largest element of the array is 35 and the second largest element is 34. 
// Input: arr[] = [10, 10, 10] 
// Output: -1 
// Explanation: The largest element of the array is 10 there is no second largest element.

#include<stdio.h>

int main() {
    int size, i;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("-1");
        return 0;
    }

    int arr[size];

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int secondMax = -1;

   
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    
    for (i = 0; i < size; i++) {
        if (arr[i] != max) {  
            if (secondMax == -1 || arr[i] > secondMax) {
                secondMax = arr[i];
            }
        }
    }

    printf("Second Largest distinct element: %d\n", secondMax);
    
    return 0;
}