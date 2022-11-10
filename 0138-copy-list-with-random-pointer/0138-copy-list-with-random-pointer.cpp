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
        // step-1
        Node* node = head;
        // Node* front = head;
        while(node){
            Node* temp = node->next;
            node->next = new Node(node->val);
            node->next->next = temp;
            node = temp;
            
        }
        
        
        // step-2
        node = head;
        while(node){
            if(node->random)
                node->next->random = node->random->next;
            
            node = node->next->next;
        }
        
        
        // step-3
        // node = head;
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