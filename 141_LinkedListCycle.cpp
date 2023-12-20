/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) {
            return false;
        }
        unordered_map<ListNode*, bool> allNodes;

        while(head != nullptr) {
            bool existsInMap = allNodes[head];

            if(existsInMap) {
                return true;
            }
            allNodes[head] = true;
            head = head->next;
        }
        return false;
    }
};
