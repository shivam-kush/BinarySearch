bool solve(vector<int>& nums) {
    /*
    int n = nums.size();
    int maxi=0;
    //from front 
    for(int i=0; i<n-1; i++){
        maxi = max(maxi, i+nums[i]);
        if(maxi < i+1) return false;
    }
    return true;
    */
    int last = nums.size()-1;
    for(int i=last; i>=0; i++){
        if(i+nums[i] >= last) last = i;
    }
    return last==0;
}
