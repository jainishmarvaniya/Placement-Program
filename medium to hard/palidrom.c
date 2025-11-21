//Check whether the given number is palindrome or not.
#include <stdio.h>
int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // reverse the number
    while (temp > 0) {
        rem = temp % 10;           // get last digit
        rev = rev * 10 + rem;      // build reverse number
        temp = temp / 10;          // remove last digit
    }

    if (rev == num)
        printf("%d is a Palindrome number.", num);
    else
        printf("%d is NOT a Palindrome number.", num);

    return 0;
}
