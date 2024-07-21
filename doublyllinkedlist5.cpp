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
    void display(){
        Node*temp=head;
        cout<<"NULL<->";
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void deleteAtEnd(){
        if(head==NULL){

            return;
        }
        Node*temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        
        }else{

        tail->next=NULL;
        }
        free(temp);
        return;
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
 l.deleteAtEnd();
 l.display();

 return 0;
}