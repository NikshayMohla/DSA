class Solution
{
private:
    vector<int> solve(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums;
        vector<int> newNums(nums.size() - 1);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            newNums[i] = (nums[i] + nums[i + 1]) % 10;
        }
        return solve(newNums);
    }

public:
    int triangularSum(vector<int> &nums)
    {
        nums = solve(nums);
        return nums[0];
    }
};