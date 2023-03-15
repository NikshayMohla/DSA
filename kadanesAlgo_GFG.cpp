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
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next)return;
        stack<ListNode*>st;
        ListNode* head1=head;

        while(head1)
        {
            st.push(head1);
            head1=head1->next;
        }
        int count=st.size();
        if(count<=2)return;
        ListNode*curr=head;
        ListNode*nxt;
        for(int i=0;i<count/2;i++)
        {
            nxt=curr->next;
            ListNode* topi=st.top();
            st.pop();
            curr->next=topi;
            curr=curr->next;
            curr->next=nxt;
            curr=curr->next;
        }
        curr->next=nullptr;
    }
};