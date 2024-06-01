//Submission Link:-https://leetcode.com/problems/design-linked-list/submissions/1274486463/

class MyLinkedList {
private:
    struct Node{
        int value;
        Node* next=NULL;
        Node(int val){
            value=val;
            next=nullptr;
        }
    };
    Node* head;
    int size;
public:
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index>=size || index<0){
            return -1;
        }
        else{
            Node* curr = head;
            for(int i=0;i<index;i++){
                curr=curr->next;
            }
            return curr->value;
        }
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>size || index<0){
            return ;
        }
        Node* newNode=new Node(val);
        Node* curr=head;
        if(index==0){
            newNode->next=head;
            head=newNode;
        }
        else{
            for(int i=0;i<index-1;i++){
                curr=curr->next;
            }
            newNode->next=curr->next;
            curr->next=newNode;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size || index<0){
            return ;
        }
        else if(index==0){
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        else{
            Node* curr=head;
            for(int i=0;i<index-1;i++){
                curr=curr->next;
            }
            Node* nextNode=curr->next->next;
            delete curr->next;
            curr->next=nextNode;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */