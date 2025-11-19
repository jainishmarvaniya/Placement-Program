// WAP for given N digits, arrange them to form the largest number divisible by 3.
#include<stdio.h>

void sortDesc(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main() {
    int n;
    printf("Enter number of digits: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d digits: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }


    if (sum % 3 != 0) {
        int rem = sum % 3;
        int removed = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 3 == rem) {
                arr[i] = -1; 
                removed = 1;
                break;
            }
        }

        if (!removed) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] % 3 == (3 - rem)) {
                    arr[i] = -1;
                    count++;
                    if (count == 2) break;
                }
            }
        }
    }

    sortDesc(arr, n);

    printf("Largest number divisible by 3: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1)
            printf("%d", arr[i]);
    }
}
