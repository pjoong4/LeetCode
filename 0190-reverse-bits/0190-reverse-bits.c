int reverseBits(int n) {
    int result=0;
    for(int i=0; i<32; i++)
        result |= ((n>>i)&(1UL))<<(31-i);
    return result;
}