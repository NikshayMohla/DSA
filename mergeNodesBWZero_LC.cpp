class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode*head1=head;
        ListNode*curr=head;
        while(!head1)
        {
            if(head1->val==0)
            {
                head1=head->next;
            }
            sum=sum+head1->val;
            head1=head1->next;
        }
        return sum;
    }
};