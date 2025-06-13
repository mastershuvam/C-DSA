#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

// insert at head
void insertAtHead(Node* & head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insert at tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insert at any position
void insertAtPosition(Node*& head, Node*& tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos - 1 && temp != NULL){
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL || temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// delete node
void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position && curr != NULL){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if(curr != NULL){
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}

// print list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 14);
    insertAtTail(tail, 80);
    insertAtPosition(head, tail, 6, 90);
    deleteNode(4, head);

    print(head);
}
