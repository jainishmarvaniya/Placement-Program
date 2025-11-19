// Given an array of coins[] of size n and a target value sum, where coins[i] represent the coins of different 
// denominations. You have an infinite supply of each of the coins. The task is to find the minimum 
// number of coins required to make the given value sum. If it is not possible to form the sum using the 
// given coins, return -1. 
// Input: coins[] = [25, 10, 5], sum = 30 
// Output: 2 
// Explanation : Minimum 2 coins needed, 25 and 5   
// Input: coins[] = [9, 6, 5, 1], sum = 19 
// Output: 3 
// Explanation: 19 = 9 + 9 + 1

#include <stdio.h>

void main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        while(target >= arr[i]) {
            target -= arr[i];
            count++;
        }
    }

    if(target == 0) {
        printf("Minimum number of coins required is: %d", count);
    } else {
        printf("-1");
    }
}
