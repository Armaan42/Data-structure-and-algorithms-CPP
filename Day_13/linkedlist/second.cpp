// insert node at head

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
	
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

void printLinkedList(Node* &head){
	Node *temp = head;
	
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

}

int main(){
	
	Node *node1 = new Node(10);
	
	Node* head =  node1;
	printLinkedList(head);

	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);
	
	return 0;
}


