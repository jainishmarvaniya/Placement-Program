#include <stdio.h>
int main() {
    int nums[3] = {1, 2, 3};

    printf("[\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == i) continue;

            for (int k = 0; k < 3; k++) {
                if (k == i || k == j) continue;
                
                printf("  [%d, %d, %d],\n", nums[i], nums[j], nums[k]);
            }
        }
    }

    printf("]\n");

    return 0;
}
