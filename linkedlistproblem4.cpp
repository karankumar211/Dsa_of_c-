#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
    
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void insert(int value){
        Node * New_node= new Node(value);
        while (head==NULL){
            head=New_node;
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=New_node;

    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
Node* findTheMiddle(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){

LinkedList ll;
ll.insert(0);
ll.insert(1);
ll.insert(2);
ll.insert(3);
ll.insert(3);
ll.insert(3);
ll.display();

Node* middle=findTheMiddle(ll.head);

cout<<"\n"<<middle->val;

 return 0;
}