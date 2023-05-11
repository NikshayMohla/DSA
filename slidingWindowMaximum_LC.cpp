class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        // deque<int>dq;
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(!dq.empty()&&dq.front()==i-k){
        //         dq.pop_front();
        //     }
        //     while(!dq.empty()&&nums[dq.back()]<nums[i])dq.pop_back();
        //     dq.push_back(i);
        //     if(i>=k-1)ans.push_back(nums[dq.front()]);
        // }
        // return ans;
        deque<int>q;
        int i=0,j=0;
        vector<int>res;
        int n=arr.size();
        while(j<n){
            while(!q.empty() && q.back()<arr[j]) q.pop_back();
            q.push_back(arr[j]);
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                res.push_back(q.front());
                if(q.front()==arr[i]) q.pop_front();
                i++;
                j++;
            }
        }
        return res;
    }
};