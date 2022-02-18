int solve(vector<int>& prices, int k) {
    sort(prices.begin(), prices.end());
    int ct = 0;
    for(int i = 0; i < prices.size(); ++i)
    {
        if(k >= prices[i]) {
            k -= prices[i];
            ct++;
        }
    }

    return ct;
}
