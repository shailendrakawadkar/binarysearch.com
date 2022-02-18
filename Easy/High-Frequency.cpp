int solve(vector<int>& nums) {
    unordered_map<int, int> um;

    for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];

    int maxFreq = 0;

    for(auto it : um)
    {
        maxFreq = max(maxFreq, it.second);
    }

    return maxFreq;
}
