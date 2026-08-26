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
        if(head == NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> m;
        Node* newtemp = new Node(head->val);
        Node* oldtemp = head->next;
        Node* NewHead = newtemp;
        m[head] = newtemp;
        while(oldtemp != NULL){
            Node* CopyNode = new Node(oldtemp->val);
            m[oldtemp] = CopyNode;
            newtemp->next = CopyNode;
            oldtemp = oldtemp->next;
            newtemp = newtemp->next; 
        }

        oldtemp = head;
        newtemp = NewHead;
        while(oldtemp != NULL){
            newtemp->random = m[oldtemp->random];
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }
        return NewHead;

    }
};