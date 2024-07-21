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
bool checkLinkedList(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if (ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    // both pointers are ptr1 is null or ptr2 is null or both are null
    return (ptr1==NULL && ptr2==NULL);
}

int main(){
LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.display();
    LinkedList l2;
    l2.insert(1);
    l2.insert(2);
    l2.insert(3);
    l2.insert(4);
    l2.display();
    cout<<checkLinkedList(l.head,l2.head);
 return 0;
}