/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *result =(int*)malloc(sizeof(int)*numsSize);
    int idx=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]<pivot){
            result[idx]=nums[i];
            idx++;
        }
    }
    for(int i=0; i<numsSize; i++){
    if(nums[i]==pivot){
        result[idx]=nums[i];
        idx++;
    }
}
    for(int i=0; i<numsSize; i++){
        if(nums[i]>pivot){
            result[idx]=nums[i];
            idx++;
        }
    }
    *returnSize = numsSize;
    return result;
}