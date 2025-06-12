#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
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
    
    insertAtHead(head,12);
    insertAtHead(head,13);
    insertAtHead(head,14);
    insertAtTail(tail,80);
    
    print(head);
    // print(tail); 
}
