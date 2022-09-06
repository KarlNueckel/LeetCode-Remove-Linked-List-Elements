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
   
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        while(head && head->val == val){//need to make sure the first element is not one that needs to be deleted
            head = head->next;
        }
        
        ListNode* ans = head;
        
        while(ans != NULL && ans->next != NULL){//delete every element after the first that is the same number as val
            if(ans->next->val == val){
                ans->next = ans->next->next;
            }
            else{
                ans = ans->next;
            }
        }

        return head;
        
    }
};