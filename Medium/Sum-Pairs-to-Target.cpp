int solve(vector<int>& nums, int target) {
    unordered_map<int, int> um;
    int ct = 0;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(um[nums[i]] > 0) {ct++; --um[nums[i]];}
        else ++um[target - nums[i]];
    }

    return ct;
}
