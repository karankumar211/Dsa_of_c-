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
        Node*New_Node= new Node(value);
        if (head ==NULL){
            head=New_Node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=New_Node;
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

void deleteAtAlternative(Node* &head){
    Node* current =head;
    while(current!=NULL && current->next!=NULL){
        Node* temp=current->next;
        current->next=temp->next;
        free(temp);
        current=current->next;
    }
}

int main(){
    Node* head=NULL;
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.display();
    
    deleteAtAlternative(l1.head);
   l1.display();
 return 0;
}