int hammingWeight(int n) {

   int result = 0;

    do{
        n&=(n-1);
        result++;
    }while(n);

    return result;
}