//merge two linked list using merge sort technique
// 10  4 
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


// merge sort using recursion

Node* merge(Node* head1,Node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->val<head2->val){
        head1->next=merge(head1->next,head2);
        return head1;
    }
    else{
        head2->next=merge(head1,head2->next);
        return head2;
    }
}
int main(){

LinkedList ll1;
LinkedList ll2;

ll1.insert(10);

ll1.insert(8);

ll1.insert(4);

ll1.insert(2);

ll1.insert(1);

ll2.insert(15);

ll2.insert(12);

ll2.insert(10);

ll2.insert(8);

ll2.insert(6);

ll2.insert(4);

ll2.insert(2);

ll2.insert(1);

ll1.display();

ll2.display();

Node* head=merge(ll1.head,ll2.head);

while(head!=NULL){
    cout<<head->val<<"->";
    head=head->next;
}



 return 0;
}