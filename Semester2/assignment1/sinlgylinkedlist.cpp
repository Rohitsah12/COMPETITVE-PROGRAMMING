#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* next;

        ListNode(int x) : val(x), next(nullptr) {}
    };

    ListNode* head;
    int size;

public:
    SinglyLinkedList() : head(nullptr), size(0) {}

    void insertAt(int index, int val) {
        if (index < 0 || index > size) return;

        ListNode* newNode = new ListNode(val);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            ListNode* prev = getNode(index - 1);
            newNode->next = prev->next;
            prev->next = newNode;
        }
        size++;
    }

    void deleteAt(int index) {
        if (index < 0 || index >= size) return;

        ListNode* toDelete;
        if (index == 0) {
            toDelete = head;
            head = head->next;
        } else {
            ListNode* prev = getNode(index - 1);
            toDelete = prev->next;
            prev->next = toDelete->next;
        }
        delete toDelete;
        size--;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void rotateRight(int k) {
        if (isEmpty() || k % size == 0) return;
        k = k % size;

        ListNode* tail = getNode(size - 1);
        tail->next = head;

        ListNode* newTail = getNode(size - k - 1);
        head = newTail->next;
        newTail->next = nullptr;
    }

    void reverse() {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    void append(int val) {
        insertAt(size, val);
    }

    void prepend(int val) {
        insertAt(0, val);
    }

    void printList() {
        ListNode* curr = head;
        while (curr != nullptr) {
            cout << curr->val << " -> ";
            curr = curr->next;
        }
        cout << "nullptr" << endl;
    }

private:
    ListNode* getNode(int index) {
        ListNode* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr;
    }
};

int main() {
    SinglyLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    list.printList();

    cout <<list.getSize() << endl;
    cout << list.isEmpty() << endl;

    list.insertAt(2, 10);
    list.printList();

    list.deleteAt(3);
    list.printList();

    list.rotateRight(2);
    list.printList();

    list.reverse();
    list.printList();

    return 0;
}
