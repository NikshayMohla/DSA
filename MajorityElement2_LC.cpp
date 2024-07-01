class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int l1 = INT_MIN, l2 = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == l1) {
                cnt1++;
            } else if(nums[i] == l2) {
                cnt2++;
            } else if(cnt1 == 0) {
                l1 = nums[i];
                cnt1 = 1;
            } else if(cnt2 == 0) {
                l2 = nums[i];
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == l1) cnt1++;
            if(nums[i] == l2) cnt2++;
        }
        
        vector<int> ans;
        int n = nums.size();
        if(cnt1 > n / 3) ans.push_back(l1);
        if(cnt2 > n / 3 && l2 != l1) ans.push_back(l2);
        return ans;
    }
};