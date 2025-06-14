#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this->data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory freed for node with data: " << val << endl;
    }
};

// print the list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// get length of list
int getLength(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// insert at head
void insertAtHead(Node*& head, Node*& tail, int d) {
    Node* temp = new Node(d);
    if (head == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insert at tail
void insertAtTail(Node*& head, Node*& tail, int d) {
    Node* temp = new Node(d);
    if (tail == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// insert at any position
void insertAtPosition(Node*& head, Node*& tail, int pos, int d) {
    if (pos == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < pos - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// delete a node at given position
void deleteNode(int position, Node*& head, Node*& tail) {
    if (head == NULL)
        return;

    if (position == 1) {
        Node* temp = head;
        if (head->next != NULL) {
            head = head->next;
            head->prev = NULL;
        } else {
            head = NULL;
            tail = NULL;
        }
        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        int cnt = 1;

        while (cnt < position && curr != NULL) {
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL) return;

        if (curr->next != NULL) {
            curr->next->prev = curr->prev;
        } else {
            tail = curr->prev;
        }

        if (curr->prev != NULL) {
            curr->prev->next = curr->next;
        }

        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 11);
    print(head);  // 11

    insertAtTail(head, tail, 13);
    insertAtTail(head, tail, 15);
    print(head);  // 11 13 15

    insertAtHead(head, tail, 9);
    print(head);  // 9 11 13 15

    insertAtPosition(head, tail, 3, 90);
    print(head);  // 9 11 90 13 15

    deleteNode(3, head, tail);
    print(head);  // 9 11 13 15

    cout << "Head: " << head->data <
