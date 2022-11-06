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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
                return head;
            }
        ListNode* sechalf = reverselist(findMid(head));
        while(sechalf != NULL && head){
            if(sechalf->val != head->val){
                return false;
            }
            sechalf  = sechalf->next;
            head = head->next;
        }
        return true;
        
        
        
    }
    public: 
        ListNode* findMid(ListNode* head){
            if(head == NULL || head->next == NULL){
                return head;
            }
            
            ListNode* slow = head;
            ListNode* fast = head;
            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            if(fast != NULL) slow = slow->next;
            return slow;
        }
    
        ListNode* reverselist(ListNode* head){
            if(head == NULL || head->next == NULL){
                return head;
            }
            ListNode *curr = head;
            ListNode *prev = NULL;
            ListNode * next;
            while(curr!= NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
        
};