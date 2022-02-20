bool solve(vector<int>& nums, int k) {
    int sum = 0;

    for (int i = 0; i < nums.size(); ++i) sum += nums[i];

    for (int i = 0; i < nums.size(); ++i) {
        if ((sum - nums[i]) == (k * (nums.size() - 1))) return true;
    }

    return false;
}
