#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 
    Node *insertAtEnd(Node *head, int x) {
        if (head == NULL) {
            return new Node(x);
        }
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        Node *newNode = new Node(x);
        temp->next = newNode;
        return head;
    }
    Node *deleteNode(Node *head, int k){
        if(head==NULL) return NULL;
        if(k==1){
            Node *temp =head;
            head = head -> next;
            free(temp);
        }
        Node *temp =head;
            int c =0;
        while(temp){
            c++;
            // if(c==k && temp->next!=NULL){
            //     temp -> data = temp -> next -> data;
            //     temp -> next = temp -> next -> next;
            //     break;
            // }
            if(c == k - 1 && temp->next != NULL) {
                Node *nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
    Node *insertAtFirst(Node *head , int val){
        Node *newNode = new Node(val) ;
        newNode->next = head ;
        head = newNode ;
        return head ;
    }
    Node *insertMid(Node *head , int val , int pos){
        Node *newNode = new Node(val) ;
        Node *temp = head ;
        int c = 0 ;
        while(temp!=NULL){
            c++ ;
            if(c==pos-1){
                newNode->next = temp->next ;
                temp->next = newNode ;
            }
            temp = temp->next ;
        }
        return head ;
    }
int main(){
    // Create a linked list and insert elements
    Node *head = new Node(1);
    head =insertAtEnd(head, 2);
    head =insertAtEnd(head, 3);
    head =insertAtEnd(head, 4);
    head = deleteNode(head,3);
    head = insertAtFirst(head,61) ;
    head = insertMid(head,64,2) ;
    // Function to print the linked list
    auto printList = [](Node *head) {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    };
    // Print the linked list
    printList(head);
}
