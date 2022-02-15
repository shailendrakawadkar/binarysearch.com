bool solve(vector<int>& nums, int k) {
    unordered_map<int, int> um;

    for(int i = 0; i < nums.size(); ++i)
    {
        if(um[nums[i]] > 0) return true;
        else ++um[k - nums[i]];
    }
    return false;
}
