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
void reverseNode(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    //current->next=prev
    //move all pointer one step forward
    while(curr!=NULL){
        next=curr->next;//storing value in next
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    // when loop ends previous pointer should point to head
    head=prev;
    /*
    or we can do with anther way
     Node * new_node =prev
    return new_node
    */
}

void usingRecursion(Node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* new_head=head->next;
    reverseNode(new_head);
    head->next->next=head;
    head->next=NULL;// head is pointing to last node in reversed it
    head=new_head;
}
int main(){
LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.display();
    reverseNode(l.head);
    l.display();
    usingRecursion(l.head);
    l.display();
 return 0;
}