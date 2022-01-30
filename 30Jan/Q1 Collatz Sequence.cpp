int solve(int n) {
    int length = 1;
    while(n != 1){
        if(n & 1){
            n = 3*n + 1;
        }else{
            n /= 2;
        }
        length++;
    }
    return length;
}
