class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapi;
        for(int i=0;i<nums.size();i++)
        {
            mapi[nums[i]]++;
        }
        for(auto it:mapi)
        {
            if(it.second>=2)return true;
        }
        return false;
    }
};