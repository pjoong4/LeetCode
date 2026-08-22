bool checkDivisibility(int n) {
    int sum=0, mul=1;
    int size = (int)log10(n)+1;

    for(int i = 0 ; i<size ; i++){
        sum += n % (int)pow(10,i+1) / (int)pow(10,i);
        mul *=  n % (int)pow(10,i+1) / (int)pow(10,i);

    }
    printf("%d %d",sum,mul);
    return (n % (sum+mul) == 0) ? true : false;
}