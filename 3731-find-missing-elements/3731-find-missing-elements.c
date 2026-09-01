int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int maxMissing = (nums[numsSize - 1] - nums[0] + 1) - numsSize;


    int* output = (int*)malloc(maxMissing * sizeof(int));
    int count = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        int expected = nums[i] + 1;
        while (expected < nums[i + 1]) {
            output[count++] = expected;
            expected++;
        }
    }

    *returnSize = count;
    return output;
}