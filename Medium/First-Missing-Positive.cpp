int solve(vector<int>& nums) {
    unordered_map<int, int> um;

    for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];

    for(int i = 1; i <= nums.size(); ++i) 
        if(um[i] > 0) continue;
        else return i;

    return nums.size() + 1;
}
