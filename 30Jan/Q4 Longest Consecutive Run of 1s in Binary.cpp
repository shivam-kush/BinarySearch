int solve(int n) {
    int globalrun = 0;
    while(n != 0){
        /*int localrun = 0;
        if(n&1 == 1){
            localrun++;
        }else{
            localrun = 0;
        }
        n = (n& (n << 1));
        if(localrun > globalrun) globalrun = localrun;
        */
        n = (n & (n << 1));
        globalrun++;
    }
    return globalrun;
}
