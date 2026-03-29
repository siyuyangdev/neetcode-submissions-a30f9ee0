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
// Floyd's Cycle Detection Algorithm (tortoise and hare)
// slow pointer: move 1 step
// fast pointer: move 2 step
// If no cycle → fast reaches NULL
// If cycle exists → fast eventually catches slow
class Solution {
public:
    bool hasCycle(ListNode* head) {
        struct ListNode* slow = head;
        struct ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return 1;
            }
        }
        return 0;
    }
};
