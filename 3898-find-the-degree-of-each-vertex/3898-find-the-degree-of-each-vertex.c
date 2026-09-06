/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *output = (int*)malloc(sizeof(int)*matrixSize);

    for(int i=0 ; i<matrixSize ; i++){
        output[i] = 0;
        for(int j=0 ; j<matrixSize ; j++){
            output[i] += matrix[i][j];
        }
    }

    *returnSize = matrixSize;
    return output;
}