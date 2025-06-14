#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    
    //constractor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLenth(Node*head){
    Node*temp = head;
    int cnt = 0;
    
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAthead(Node* &head,int d){
    if()
    Node*temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head=temp;
}

void insertAtTail(Node*& tail, int d){
    Node*temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail=temp;
}

void insertAtPos(Node*&head,Node*&tail,int pos,int d){
    if(pos==1){
        insertAthead(head,d);
        return;
    }
    Node*temp = head;
    int cnt = 1;
    
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return ;
    }
    
    Node* nodeInsertAny = new Node(d);
    nodeInsertAny->next = temp->next;
    temp->next->prev = nodeInsertAny;
    temp->next = nodeInsertAny;
    nodeInsertAny->prev = temp;
    
}



int main()
{
    Node*head = NULL;
    Node* tail = NULL;
    print(head);
    
    cout<<getLenth(head)<<endl;
    
    insertAthead(head,11);
    print(head);
    
    insertAtTail(tail, 13);
    insertAtTail(tail, 15);
    insertAthead(head,9);
    print(head);
    insertAtPos(head,tail,3,90);
    print(head);
    return 0;
}
