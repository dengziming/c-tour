
#include <stdio.h>

int firstMissingPositive(int *, int);

int main(void) {
    int v1[] = {1, 2, 3};
    if (firstMissingPositive(v1, 3) != 4) {
        printf("error");
    }

    int v2[] = {1, 2, 0};
    if (firstMissingPositive(v2, 3) != 3) {
        printf("error");
    }
}

int firstMissingPositive(int* nums, int numsSize) {
    // bitmap TODO this can be optimized
    int bitmap[numsSize + 1];
    for (int i = 1; i < numsSize + 1; ++i) {
        bitmap[i] = 0;
    }
    for (int i = 0; i < numsSize; ++i) {
        int index = nums[i];
        if (index > 0 && index < numsSize + 1) {
            bitmap[index] = 1;
        }
    }
    for (int i = 1; i < numsSize + 1; ++i) {
        if (bitmap[i] == 0) {
            return i;
        }
    }
    return numsSize + 1;
}
