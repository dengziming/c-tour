
#include <stdio.h>

int lengthOfLIS(int *, int);

int main(void) {
    int v1[] = {1, 2, 3};
    if (lengthOfLIS(v1, 3) != 3) {
        printf("error");
    }

    int v2[] = {1, 2, 0};
    if (lengthOfLIS(v2, 3) != 2) {
        printf("error");
    }
}

int lengthOfLIS(int* nums, int numsSize){
    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return 1;

    int max[numsSize];

    for (int i = 0; i < numsSize; ++i) {
        max[i] = 1;
    }

    // 对于每一个 i，即截止第 index 个数，求最大值
    for (int i = 0; i < numsSize; ++i) {
        // 从 0 开始遍历到 i，只要 nums[i] > nums[j]，说明 可以在 max[i] 的基础上加一个
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j] && max[i] < max[j] + 1) {
                max[i] = max[j] + 1;
            }
        }
    }

    int value = 1;
    for (int i = 0; i < numsSize; ++i) {
        if (max[i] > value)
            value = max[i];
    }
    return value;
}
