class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev = nullptr, *temp;
        while (fast && fast->next) {
            fast = fast->next->next;
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if (fast) slow = slow->next;
        while (prev && slow) {
            if (prev->val != slow->val) return false;
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};