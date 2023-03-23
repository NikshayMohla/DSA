class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>aa;
        for(int i=0;i<nums.size();i++)
        {
            aa[nums[i]]++;
        }
        vector<int>ans;
        for(auto it:aa)
        {
            if(it.second==1)ans.push_back(it.first);
        }
        return ans;
    }
};