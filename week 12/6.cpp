#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        this->head = nullptr;
    }

    void insertBeginning(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void display() {
        if (head == nullptr) {
            cout << "Linked List is empty" << endl;
            return;
        }

        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
		cout << endl;
    }
    void insertPosition(int val, int position){
        if (position == 0){
            insertBeginning(val);
            return;
        }
        Node* new_node = new Node(val);
        int i =0;
        Node* temp = head;
        while (temp != nullptr){
            if (i == position){
                new_node->next = temp->next;
                temp->next = new_node;
                return;
            }
            temp = temp->next;
            i+=1;
        }
        temp->next = new_node;
        return;

    }
    void deleteBeginning(){
        Node* temp = head;
        temp = temp->next;
        head = temp;
        return;
    }
    void deletePosition(int position){
        if (position == 0){
            deleteBeginning();
            return;
        }
        int i = 0;
        Node* temp = head;
        while(i < position){
            cout << temp->val << endl;
            if(i==position-1){
                Node* curr = temp->next;
                temp->next = curr->next;
                return;
            }
            else{

                temp = temp->next;
            }
            i+=1;
        }
        return;

    }
};

int main() {
    LinkedList ll;

    ll.insertBeginning(12);
    ll.insertBeginning(11);

    ll.insertBeginning(10);
    ll.insertBeginning(9);
    ll.display();

    
    ll.insertBeginning(8);
    ll.insertBeginning(7);

    ll.display();
    ll.insertPosition(22, 4);
    ll.display();

    ll.deleteBeginning();
    ll.display();
    ll.deletePosition(2);
    ll.display();
    return 0;
}
