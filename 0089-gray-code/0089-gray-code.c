/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define OUTPUT_SIZE(n) (1<<n)

int* grayCode(int n, int* returnSize) {
    int* result =(int*)malloc(sizeof(int)*OUTPUT_SIZE(n));
    result[0] = 0;
    int temp;
    for(int i=1; i<OUTPUT_SIZE(n); i++)
    {
        temp = 0; 
        for(int j=0; j<((i/16)+1)*4; j++)
        {
            if(j==(((i/16)+1)*4)-1)
            {
                temp |= ((i>>j)&(1UL))<<j;
                break;
            }
            temp |= (((i>>j)&(1UL))^((i>>(j+1))&(1UL)))<<j;
        }//for j
        result[i]=temp;                             
    }//for i
    *returnSize = OUTPUT_SIZE(n);
    return result;
}