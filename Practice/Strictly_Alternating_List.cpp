bool solve(vector<int>& nums) {
    //bool flag = false;
    if (nums[1] - nums[0] <= 0) return false;
    int N = nums.size();
    for (int i = 2; i < N; ++i) {
        if (nums[i] - nums[i - 1] == 0) return false;
    }
    return true;
    
}
