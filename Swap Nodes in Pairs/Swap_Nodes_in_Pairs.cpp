class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode *temp = head;
        ListNode *temp2 = head->next;

        while (temp != NULL && temp->next != NULL) {
            int x = temp->val;
            temp->val = temp2->val;
            temp2->val = x;

            if (temp2->next == NULL) break;

            temp = temp->next->next;
            temp2 = temp2->next->next;
        }
        return head;
    }
};
