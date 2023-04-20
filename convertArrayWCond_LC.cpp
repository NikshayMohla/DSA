class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> cnt(nums.size() + 10);
        for (int it : nums)
        {
            if (ans.size() <= cnt[it])
                ans.push_back({});
            ans[cnt[it]++].push_back(it);
        }
        return ans;
    }
};