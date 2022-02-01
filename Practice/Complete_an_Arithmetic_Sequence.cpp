int solve(vector<int>& nums) {
    int n = nums.size();
    int diff = (nums[n-1] - nums[0]) / (n);
    int missing;
    for(int i=1; i<n; i++){
        if(nums[i]-nums[i-1] != diff){
            return nums[i-1]+diff;
        }
    }
    return nums[0]+diff;
}
