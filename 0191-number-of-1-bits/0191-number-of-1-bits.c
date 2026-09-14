int hammingWeight(int n) {

   int result = 0;

    do{
        if(n%2 == 1) result++;
    }while(n/=2);

    return result;
}