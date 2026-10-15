#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
    Node* root;

    Node* insert(Node* root, int val) {
        if (root == nullptr) {
            return new Node(val);
        }

        if (root->val > val) {
            root->left = insert(root->left, val);
        }
        else if (root->val < val) {
            root->right = insert(root->right, val);
        }

        return root;
    }

    bool search(Node* root, int val) {
        if (root == nullptr) {
            return false;
        }

        if (root->val == val) {
            return true;
        }

        if (root->val > val) {
            return search(root->left, val);
        }
        else {
            return search(root->right, val);
        }
    }

    // Find the smallest node in a subtree
    Node* findMin(Node* root) {
        while (root != nullptr && root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    // Delete a node from the BST
    Node* deleteNode(Node* root, int val) {
        if (root == nullptr) {
            return nullptr;
        }

        if (val < root->val) {
            root->left = deleteNode(root->left, val);
        }
        else if (val > root->val) {
            root->right = deleteNode(root->right, val);
        }
        else {
            // Case 1: No left child
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            }

            // Case 2: No right child
            if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Case 3: Two children
            Node* temp = findMin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }

        return root;
    }

    void inorder(Node* root) {
        if (root == nullptr) {
            return;
        }

        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int num) {
        root = insert(root, num);
    }

    bool search(int val) {
        return search(root, val);
    }

    void remove(int val) {
        root = deleteNode(root, val);
    }

    void print() {
        inorder(root);
        cout << endl;
    }
};

int main() {
    BST b;

    b.insert(1);
    b.insert(2);
    b.insert(3);
    b.insert(4);

    cout << "Original BST: ";
    b.print();

    cout << "Is number 5 present? " << b.search(5) << endl;

    b.remove(3);

    cout << "After deleting 3: ";
    b.print();

    return 0;
}