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
    int count(ListNode *head)
    {
        int count = 0;
        ListNode *curr = head;
        while (curr != NULL)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }

public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }

        ListNode *curr = head;
        int len = count(curr);
        ListNode *prev = NULL;
        int c = 0;

        if (n == len)
        {
            head = curr->next;
        }
        else
        {
            while (c < len - n)
            {
                prev = curr;
                curr = curr->next;
                c++;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete (curr);
        }
        return head;
    }
};