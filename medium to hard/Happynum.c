//wap to check number is happy or not.
#include <stdio.h>

int main() {
    int num, temp, rem, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 1 && temp != 4) {
        sum = 0;

        while (temp > 0) {
            rem = temp % 10;          // extract digit
            sum = sum + (rem * rem);  // square and add
            temp = temp / 10;
        }

        temp = sum;  // update number
    }

    if (temp == 1)
        printf("%d is a Happy Number.", num);
    else
        printf("%d is NOT a Happy Number.", num);

    return 0;
}
