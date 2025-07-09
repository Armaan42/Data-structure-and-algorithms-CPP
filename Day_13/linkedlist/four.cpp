// insert at position

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
};

void insertAtHead(Node* &head, int data){
	Node *temp = new Node(data);
	
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int pos, int data){

    if(pos == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;

    int count = 1;

    while(count < pos - 1){
        temp = temp->next;
        count++;
    }

    Node* node_to_insert = new Node(data);
    node_to_insert->next = temp->next;
    temp->next = node_to_insert;

    if(temp->next == NULL){
        insertAtTail(head, data);
        return;
    }
}

void print(Node *head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    print(head);

    insertAtPosition(head, 1, 100);

    print(head);

    cout << "head: "<< head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}