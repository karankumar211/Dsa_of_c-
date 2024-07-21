#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*pre;
    Node(int data){
        val=data;
        next=NULL;
        pre=NULL;
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
    void insertAtStart(int value){
        Node*newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
    return;
    }
    void display(){
        Node*temp=head;
        cout<<"NuLL<->";
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
 DoublyLinkedList l;
 l.insertAtStart(1);
 l.insertAtStart(2);
 l.insertAtStart(3);
 l.insertAtStart(4);
 l.insertAtStart(5);
 l.display();
 return 0;
}