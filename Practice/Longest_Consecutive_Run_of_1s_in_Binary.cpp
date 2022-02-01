int solve(int n){
    int globalrun = 0;
    while(n != 0){
        n = (n & (n << 1));
        globalrun++;
    }
    return globalrun;
}
