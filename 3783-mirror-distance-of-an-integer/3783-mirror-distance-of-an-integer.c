int mirrorDistance(int n) {
    int result=0;
    int num = n;
    while(num){
        result += (num%10) * pow(10,(int)log10(num));

        num /= 10;
    }

    return abs(result-n);
}