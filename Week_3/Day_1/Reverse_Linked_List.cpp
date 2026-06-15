class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* nxt_node;  

        while(temp != nullptr){
            nxt_node = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = nxt_node;
        }
        
        return prev;
    }
};