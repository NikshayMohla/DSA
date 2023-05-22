/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
private:
    int maxii(vector<int> ans, int &maxi)
    {
        int i = 0;
        int j = ans.size() - 1;
        while (i < j)
        {
            maxi = max(maxi, ans[i] + ans[j]);
            i++;
            j--;
        }
        return maxi;
    }

public:
    int pairSum(ListNode *head)
    {
        int maxi = INT_MIN;
        vector<int> ans;
        ListNode *slow = head;
        while (slow != nullptr)
        {
            ans.push_back(slow->val);
            slow = slow->next;
        }
        return maxii(ans, maxi);
    }
};