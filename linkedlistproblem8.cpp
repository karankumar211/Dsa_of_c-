//merge two linked list using merge sort technique
// 10 4
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
        cout<<"NULL"<<endl;
    }
};


// you are given an array of k linked list each linked list is sorted in ascending order merge all the linked list into one sorted linked list and return;

Node* merge(Node* head1,Node* head2){
   
int main(){

LinkedList ll1;
LinkedList ll2;




 return 0;
}