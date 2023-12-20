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
    ListNode* reverseList(ListNode* head) {
        ListNode dummy(0);
        ListNode* newList = &dummy;
        stack<int> stackVar;

        while(head != nullptr) {
            stackVar.push(head->val);
            head = head->next;
        }
        while(!stackVar.empty()){
            newList->next = new ListNode(stackVar.top());
            newList = newList->next;
            stackVar.pop();
        }
        return dummy.next;
    }
};
