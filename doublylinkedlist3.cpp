#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkedList{
    public:
    Node*head;
    Node*tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtEnd(int data){
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void insertAtK(int data,int k){
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        Node*temp=head;
        int count=1;
        while(count<k-1){
            temp=temp->next;
            count++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->prev-temp;
        newNode->next->prev=newNode;
    }
    void display(){
        Node*temp=head;
        cout<<"NULL<->";
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
DoublyLinkedList l;
l.insertAtEnd(1);
 l.insertAtEnd(2);
 l.insertAtEnd(3);
 l.insertAtEnd(4);
 l.insertAtEnd(5);
 l.display();
 l.insertAtK(6,2);
 l.display();

 return 0;
}