class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            temp = temp -> next;
        }

        int from_left = cnt - n;
        if(from_left == 0){
            ListNode* newHead = head->next;
            delete(head);
            return newHead;
        }

        ListNode* nxt = head;
        ListNode* prev = nxt;
        cnt = 0;
        while(nxt){
            if(cnt == from_left){
                prev -> next = nxt -> next;
                delete(nxt);
                break;
            }
            cnt++;
            prev = nxt;
            nxt = nxt -> next;
        }
        return head;
    }
};