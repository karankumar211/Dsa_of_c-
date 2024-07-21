//using two pointer delete last k positions 
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
        Node* NewNode=new Node(value);
        if(head==NULL){
            head=NewNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NewNode;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
bool check(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1!=NULL&& temp2!=NULL){
        if(temp1->val!=temp2->val){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return (temp1==NULL && temp2==NULL);
}
int main(){
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.display();
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    
    ll.display();
    cout<<check(l.head,ll.head);

    
 return 0;
}