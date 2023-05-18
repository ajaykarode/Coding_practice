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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int count = 1;
        // ListNode* p = head;
        // while(p != NULL){
        //     count++;
        //     p = p->next;
        // }
        // int res = count-n;
        // ListNode* q = head;
        // for(int i = 1;i<=res;i++){
        //     q = q->next;
        // }
        // ListNode* t = q->next;
        // q->next = q->next->next;
        // delete(t);
        // return head;
        
        int count = 0;
        if(head == NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        if(count == n){
            head = head->next;
            return head;
        }
        int ans = count-n-1;
        temp = head;
        for(int i = 1;i<=ans;i++){
            temp = temp->next;
        }
        ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete(todelete);
        return head;
        
        
        
    }
};