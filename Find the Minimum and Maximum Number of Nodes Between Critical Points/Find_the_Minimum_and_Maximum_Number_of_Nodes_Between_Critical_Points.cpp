#include <algorithm>
#include <vector>
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        if (size <= 2)
            return {-1, -1};
        temp = head;
        ListNode* temp2 = head->next;
        ListNode* temp3 = head->next->next;
        vector<int> v;
        size = 0;
        while (temp3 != NULL) {
            if (temp->val < temp2->val && temp3->val < temp2->val) {
                v.push_back(size + 1);
            } else if (temp->val > temp2->val && temp3->val > temp2->val) {
                v.push_back(size + 1);
            } else {
            }
            size++;
            temp = temp->next;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }
        if (v.size() < 2)
            return {-1, -1};
        sort(v.begin(), v.end());
        int mini = INT_MAX;
        for (int i = 1; i < v.size(); i++) {
            mini = min(mini, v[i] - v[i - 1]);
        }
        return {mini, v[v.size() - 1] - v[0]};
        //return {v[1] - v[0], v[(v.size() - 1)] - v[0]}; //v = [2, 4, 5]=> 5 - 4 = 1
    }
};