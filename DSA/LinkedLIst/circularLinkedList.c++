#include <iostream>
using namespace std;


//cerculer linked list

class Node{
    public:
    
    int data;
    Node*next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    
    ~Node() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << data << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {
    // empty list
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    } else {
        // non-empty list, assume element is present
        Node* curr = tail;

        while (curr->data != element) {
            curr = curr->next;
            // safeguard for infinite loop if element not found
            if (curr == tail) {
                cout << "Element " << element << " not found in the list.\n";
                return;
            }
        }

        // insert after element
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

        // optional: if inserting after tail, update tail
        if (curr == tail)
            tail = temp;
    }
}

void print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = tail->next;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

void deleteNode(Node* &tail, int element){
    
}

int main() {
    Node* tail = NULL;

    // initially list is empty
    insertNode(tail, 5, 3);  // insert 3 into empty list
    insertNode(tail, 3, 5);  // insert 5 after 3
    insertNode(tail, 5, 7);  // insert 7 after 5
    insertNode(tail, 7, 9);  // insert 9 after 7

    print(tail);

    return 0;
}
