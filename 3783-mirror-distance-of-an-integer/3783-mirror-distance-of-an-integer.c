int mirrorDistance(int n) {
    int result=0;
    int num = n;
    while(num){
        result = (result*10) + (num%10);

        num /= 10;
    }

    return abs(result-n);
}