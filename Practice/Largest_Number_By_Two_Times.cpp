bool solve(vector<int>& nums) {
    bool flag = false;
    sort(nums.begin(), nums.end());
    if(nums[nums.size() - 1] > nums[nums.size()-2]*2) flag = true;
    return flag;
}
