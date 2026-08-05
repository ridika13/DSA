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

        // fake first node and the pointer[temp] to it
        ListNode dummy;
        ListNode* temp = &dummy;

        // run till any list becomes null
        while (list1 != NULL && list2 != NULL) {

            if (list1->val <= list2->val) {
                // attach smaller node to temp.next
                temp->next = list1;
                // move further to process unprocessed nodes
                list1 = list1->next;
            }

            else {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;
        }

        // attach the remaining nodes as it is because they are already sorted
        temp->next = (list1 == NULL) ? list2 : list1;
        return dummy.next;
    }
};