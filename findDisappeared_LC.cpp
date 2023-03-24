class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>pee;
        for(int i=0;i<nums.size();i++)
        {
            pee[nums[i]]++;
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(pee.find(i)==pee.end())ans.push_back(i);
        }
        return ans;
    }
};