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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p = headA;
        ListNode *q = headB;
        
        int lengthA = 0;
        int lengthB = 0;
        while(p != NULL){
            lengthA++;
            p = p->next;         
        }
        while(q != NULL){
            lengthB++;
            q = q->next;            
        }
        
        int t = abs(lengthA - lengthB);
        
        if(lengthA > lengthB){
            while(t){
                headA = headA->next;
                t--;
            }
        }
        else{
            while(t){
                headB = headB->next;
                t--;
            }
        }
        
        
        while(headA != NULL && headB != NULL){
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;    
        }
        return NULL;
        
    }
};