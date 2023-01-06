/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter = head;
        Node* front = head;
        while(iter){
            Node* front = iter->next;
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        iter = head;
        while(iter){
            if(iter->random)
                iter->next->random = iter->random->next;
            iter = iter->next->next;
        }
        
        // iter = head;
        
        Node* ans = new Node(0);
        
        Node* helper = ans;
        while(head){
            
            helper->next = head->next;
            helper = helper->next;
            
            head->next = head->next->next;
            head = head->next;
            
        }
        return ans->next;
        
        
    }
};















