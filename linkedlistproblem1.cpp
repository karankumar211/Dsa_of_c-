// 10 8 4 2 1
/*Given 2 sorted linked list merge them into 1 singly linked list such tha the resulting list is also*/
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

Node* merge(Node* &head1, Node *head2){
    Node* dummy=new Node(-1 );
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=dummy;
    while(ptr1 && ptr2){

        if(ptr1->val<ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

        if(ptr1){
            ptr3->next=ptr1;
        }else{
            ptr3->next=ptr2;
        }
    return dummy->next;
}

int main(){

LinkedList ll1;
LinkedList ll2;
ll1.insert(1);
ll1.insert(3);
ll1.insert(5);
ll1.display();
ll2.insert(2);
ll2.insert(4);
ll2.insert(6);
ll2.display();
LinkedList ll3;
ll3.head=merge(ll1.head, ll2.head);
ll3.display();
 
 return 0;
}