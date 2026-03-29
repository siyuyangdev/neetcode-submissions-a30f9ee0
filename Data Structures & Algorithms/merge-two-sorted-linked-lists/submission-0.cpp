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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode dummy_node; // create dummy node(fake start), malloc(node)
        struct ListNode* dummy = &dummy_node; // create a pointer points to the address of dummy node
        struct ListNode* curr = dummy; // trav pointer, start at dummy
        struct ListNode* p1 = list1; // pointer 1: head of list 1
        struct ListNode* p2 = list2; // pointer 2: head of list 2
        while (p1 != NULL && p2 != NULL) {
            if (p1->val <= p2->val)
            {
                curr->next = p1;
                p1 = p1->next;
            }
            else
            {
                curr->next = p2;
                p2 = p2->next; 
            }
            curr = curr->next; // after one of the lists are empty, move trav pointer to next
        }
        // one of the list is empty, insert remaining node to the merged list.
        if (p1 != NULL) {
            curr->next = p1;
        } else {
            curr->next = p2;
        }
        return dummy->next;
    }
};