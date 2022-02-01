vector<int> solve(vector<int>& nums, int k) {
    if (k==0) return nums;
    
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end() - k);
    reverse(nums.end() - k, nums.end());
        
    return nums;
}
