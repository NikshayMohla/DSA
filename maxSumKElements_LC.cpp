class Solution
{
public:
    int maximizeSum(vector<int> &n, int k)
    {
        // int m = *max_element(begin(n), end(n));
        // return k * m + k * (k - 1) / 2;
        int maxi = 0;
        for (int i = 0; i < n.size(); i++)
        {
            maxi = max(maxi, n[i]);
        }
        int ans = 0;
        while (k > 0)
        {
            ans += maxi;
            maxi = maxi + 1;
            k--;
        }
        return ans;
    }
};