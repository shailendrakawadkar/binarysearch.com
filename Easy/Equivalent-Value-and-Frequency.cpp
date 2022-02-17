bool solve(vector<int>& nums) {
    unordered_map<int, int> um;

    for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];

    for(auto it : um)
    {
        if(it.first == it.second) return true;
    }

    return false;
}
