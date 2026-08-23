int missingNumber(int* nums, int numsSize) {
    int total = 0, n_total =0;
     for(int i=0 ; i<numsSize ; i++){
        n_total += nums[i];
        total += i+1;
     }
     return total-n_total;
}