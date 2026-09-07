/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int count=0;
    int *result = (int*)malloc(sizeof(int)*friendsSize);

    for(int i=0; i<orderSize; i++){
        for(int j=0; j<friendsSize; j++){
            if(order[i]==friends[j]){
                result[count]=order[i];
                count++;
                break;
            }
        }//for j
        if(count == friendsSize)
            break;
    }//for i

    *returnSize = friendsSize;
    return result;
}