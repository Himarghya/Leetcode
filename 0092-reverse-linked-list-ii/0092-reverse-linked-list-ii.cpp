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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        

ListNode dummy(0);
dummy.next = head;

ListNode* rightPos = head;
for(int i = 1; i < right; i++){
    rightPos = rightPos->next;
}

ListNode* leftPos = &dummy;
for(int i = 1; i < left; i++){
    leftPos = leftPos->next;
}

ListNode* end = rightPos->next;
ListNode* prev = end;
ListNode* curr = leftPos->next;
ListNode* hold = curr;
ListNode* next = NULL;

while(curr != end){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}

leftPos->next = prev;
hold->next = end;

return dummy.next;

    }
};