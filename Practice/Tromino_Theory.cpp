int solve(int n) {
    int mod = 1e9 + 7;
    vector<long> arr = {0,1,2,5};
    arr.resize(n+1);
    for(int i=4; i<=n; i++){
        arr[i] = 2 * arr[i-1] + arr[i-3];
        arr[i] %= mod;
    }
    return arr[n];
}
