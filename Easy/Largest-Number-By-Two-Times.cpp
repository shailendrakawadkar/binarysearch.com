bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if(nums[nums.size()-1] > nums[nums.size()-2] * 2) return true;
    return false;
}
