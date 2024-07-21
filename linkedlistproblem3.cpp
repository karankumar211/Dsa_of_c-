#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
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
        Node* New_Node = new Node(value);
        if(head==NULL){
            head=New_Node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=New_Node;
    }
    display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void reversed(Node* &head){
    //using recursion 
    //base case
    if(head==NULL){
        return;
    }
    reversed(head->next);
    cout<<head->val<<"-> ";
    
}
int main(){
LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.display();
    reversed(l.head);
    cout<<"null";
 return 0;
}