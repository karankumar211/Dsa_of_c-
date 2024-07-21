// 10 8 4 2 1
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
// Given the heads of two heads return the node at which the two lists intersect if the two linked list have no intersection at all , return null 
int getLength(Node *head){
    Node *temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
Node* moveHead(Node* head, int k){
    Node * ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;
}
Node* intersection(Node *head1, Node *head2){
   
    // calculate the length of both linked list
    int l1 =getLength(head1);
    int l2 = getLength(head2);
    //find the difference and move  longer linked list ny k steps 
     Node * ptr1 ;
    Node * ptr2 ;
    if(l1>l2){
        int k=l1-l2;
        
       ptr1= moveHead(head1,k);
        ptr2=head2;
    } else{
        int k=l2-l1;
        ptr1=head1;
      ptr2=  moveHead(head2,k);
    }
    //compare the pointer1 and pointer2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}


int main(){

LinkedList ll;
LinkedList li;
ll.insert(1);
ll.insert(2);
ll.insert(3);
ll.insert(4);
ll.insert(5);
ll.display();
li.insert(6);
li.insert(7);
li.head->next->next=ll.head->next->next->next;
li.display();
Node* getIntersection = intersection(ll.head,li.head);
if(getIntersection){
    cout<<getIntersection->val<<endl;
}else{

    cout<<"NULL"<<endl;
}

 return 0;
}