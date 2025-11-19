// Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, …]. 
// Input: n = 11 => Output: 0 
// Explanation: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the 
// number 10.

#include <stdio.h>

int main() {
    long n;
    printf("Enter the position: ");
    scanf("%ld", &n);

    long digits = 1, count = 9, start = 1;

    while (n > digits * count) {
        n -= digits * count;
        digits++;
        count *= 10;
        start *= 10;
    }
    long num = start + (n - 1) / digits;
    int idx = (n - 1) % digits;

    char str[30];
    sprintf(str, "%ld", num);
    printf("%c\n", str[idx]);

    return 0;
}
