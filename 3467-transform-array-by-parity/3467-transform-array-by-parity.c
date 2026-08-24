/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {

    int count = 0;
    for(int i=0 ; i<numsSize ; i++){
        if(nums[i]%2==1){
            count += 1;
        }
    }

    for(int i =0 ; i<numsSize ; i++){
        if(i<(numsSize-count)){
            nums[i]=0;
        }
        else{
        nums[i]=1;
        }
    }
    *returnSize = numsSize;
    return nums;
}