class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m1;
        for (int i = 0; i < nums.size(); i++)
        {
            m1[nums[i]]++;
        }
        vector<pair<int, int>> ans;
        for (auto x : m1)
        {
            ans.push_back({x.second, x.first});
        }
        sort(ans.rbegin(), ans.rend());
        vector<int> sol;
        int i = 0;
        while (k--)
        {
            sol.push_back(ans[i].second);
            i++;
        }
        return sol;
    }
};