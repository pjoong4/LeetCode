bool isPowerOfTwo(int n) {
    int count=0;
    while(n){
        if(count) return false;
        if(n&(1UL)) count++;
        n=n>>1;
    }
    if(count == 1)  return true;
    return false;
}