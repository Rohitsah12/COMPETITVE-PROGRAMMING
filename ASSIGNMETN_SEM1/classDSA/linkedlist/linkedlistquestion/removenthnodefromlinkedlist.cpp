ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0); 
    dummy->next = head;

    int size = 0;
    ListNode* current = head;
    while (current != nullptr) {
        size++;
        current = current->next;
    }
    int positionToRemove = size - n;

    if (positionToRemove <= 0) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    ListNode* prev = dummy;
    for (int i = 0; i < positionToRemove - 1; ++i) {
        prev = prev->next;
    }

    ListNode* temp = prev->next;
    prev->next = prev->next->next;
    delete temp;

    return dummy->next; 
}
//two pointer approach
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
        ListNode* dummy = new ListNode(0); 
    dummy->next = head;
    ListNode* first = dummy;
    ListNode* second = dummy;

    
    for (int i = 0; i <= n; i++) {
        if (second == nullptr)
            return head;
        second = second->next;
    }

    
    while (second != nullptr) {
        first = first->next;
        second = second->next;
    }

    first->next = first->next->next;

    return dummy->next;
    }
};

