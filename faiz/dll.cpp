#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *back;
    Node(int x)
    {
        data = x;
        next = NULL;
        back = NULL;
    }
    Node (int x,Node *back1, Node *next1){
        data = x;
        next = next1;
        back = back1;;
    }

};
Node *convertArr2Dll(vector<int> arr){
    Node *head = new Node(arr[0]);
    Node *prevNode = head;

    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i],prevNode,nullptr);
        prevNode -> next = temp;
        prevNode =temp;
    }
    return head;
}
    
Node *deleteHead(Node *head){
    Node* temp = head ;
    head = head-> next ;
    head -> back = NULL ;
    delete temp ;
    return head ;
}

Node *deleteMid(Node *head , int pos){
    int c = 0 ;
    Node *temp = head ;
    while(temp){
        c++ ;
        if(c==pos){
            break ;
        }
        temp=temp->next ; 
    }
    Node *prevNode = temp->back ;
    Node *front = temp->next ;
    prevNode->next = front ;
    front->back = prevNode ;
    delete temp ;
    return head ;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node *head = convertArr2Dll(arr);
    head = deleteHead(head) ;
    head = deleteMid(head , 3) ;

    Node *temp =head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
