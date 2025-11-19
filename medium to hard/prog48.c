// Given an unsorted integer array nums, return the smallest missing positive integer. You must implement 
// an algorithm that runs in O(n) time and uses constant extra space.  
// Input: nums = [1,2,0] Output: 3

#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter elements %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for (int num = 1; num <= n + 1; num++) {

        int found = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == num) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Smallest missing Element: %d", num);
            return 0;
        }
    }
    

}
