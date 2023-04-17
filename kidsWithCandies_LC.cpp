class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=-1;
        vector<bool>ans;
        for(auto it:candies)
        {
            maxi=max(it,maxi);
        }
        for(auto it:candies)
        {
            if(it+extraCandies>=maxi)
            {
                ans.push_back(true);
            }
            else ans.push_back(false);
        }
        return ans;
    }
};