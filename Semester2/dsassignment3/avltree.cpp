#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    int height;
    int size;
    int balanceFactor;
    Node* left;
    Node* right;

    Node(int val) : value(val), height(1), size(1), balanceFactor(0), left(nullptr), right(nullptr) {}
};

class AVLTree {
private:
    Node* root;
    
    int height(Node* node) {
        return node ? node->height : 0;
    }

    int size(Node* node) {
        return node ? node->size : 0;
    }

    void update(Node* node) {
        if (node) {
            int leftHeight = height(node->left);
            int rightHeight = height(node->right);
            node->height = 1 + max(leftHeight, rightHeight);
            node->size = 1 + size(node->left) + size(node->right);
            node->balanceFactor = rightHeight - leftHeight;
        }
    }

    Node* rotateLeft(Node* node) {
        Node* newRoot = node->right;
        node->right = newRoot->left;
        newRoot->left = node;
        update(node);
        update(newRoot);
        return newRoot;
    }

    Node* rotateRight(Node* node) {
        Node* newRoot = node->left;
        node->left = newRoot->right;
        newRoot->right = node;
        update(node);
        update(newRoot);
        return newRoot;
    }

    Node* balance(Node* node) {
        if (node->balanceFactor == 2) {
            if (node->right->balanceFactor < 0) {
                node->right = rotateRight(node->right);
            }
            return rotateLeft(node);
        }
        if (node->balanceFactor == -2) {
            if (node->left->balanceFactor > 0) {
                node->left = rotateLeft(node->left);
            }
            return rotateRight(node);
        }
        return node;
    }

    Node* insert(Node* node, int value) {
        if (!node) return new Node(value);
        if (value < node->value) {
            node->left = insert(node->left, value);
        } else if (value > node->value) {
            node->right = insert(node->right, value);
        }
        update(node);
        return balance(node);
    }

    Node* remove(Node* node, int value) {
        if (!node) return nullptr;
        if (value < node->value) {
            node->left = remove(node->left, value);
        } else if (value > node->value) {
            node->right = remove(node->right, value);
        } else {
            if (!node->left) {
                Node* rightNode = node->right;
                delete node;
                return rightNode;
            } else if (!node->right) {
                Node* leftNode = node->left;
                delete node;
                return leftNode;
            } else {
                Node* successor = node->left;
                while (successor->right) {
                    successor = successor->right;
                }
                node->value = successor->value;
                node->left = remove(node->left, successor->value);
            }
        }
        update(node);
        return balance(node);
    }

    bool contains(Node* node, int value) {
        if (!node) return false;
        if (value < node->value) return contains(node->left, value);
        if (value > node->value) return contains(node->right, value);
        return true;
    }

    int orderOfKey(Node* node, int value) {
        if (!node) return 0;
        if (value <= node->value) return orderOfKey(node->left, value);
        return 1 + size(node->left) + orderOfKey(node->right, value);
    }

    Node* getByOrder(Node* node, int k) {
        int leftSize = size(node->left);
        if (k < leftSize) return getByOrder(node->left, k);
        if (k == leftSize) return node;
        return getByOrder(node->right, k - leftSize - 1);
    }

public:
    AVLTree() : root(nullptr) {}

    bool find(int value) {
        return contains(root, value);
    }

    bool insert(int value) {
        if (contains(root, value)) return false;
        root = insert(root, value);
        return true;
    }

    bool remove(int value) {
        if (!contains(root, value)) return false;
        root = remove(root, value);
        return true;
    }

    int order_of_key(int value) {
        return orderOfKey(root, value);
    }

    int get_by_order(int k) {
        Node* result = getByOrder(root, k);
        return result ? result->value : -1;
    }
};

int main() {
    AVLTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    cout << "Find 20: " << tree.find(20) << endl;
    cout << "Order of 20: " << tree.order_of_key(20) << endl;
    cout << "Element at order 1: " << tree.get_by_order(1) << endl;
    tree.remove(20);
    cout << "Find 20: " << tree.find(20) << endl;
    return 0;
}
