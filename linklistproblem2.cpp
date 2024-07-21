#include<iostream>
using namespace std;
class Node{
    public:
    int val1;
    Node* next;
    Node(int data){
        val1=data;
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
        Node* New_Node=new Node(value);
        if(head==NULL){
            head=New_Node;
            return;
        }
        else{
            Node* temp =head;
            while(temp->next!=NULL){
                temp =temp->next;
            }
            temp->next=New_Node;
        }
    }
    display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val1<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void duplicateDelate(Node* &head){
    Node* temp ;
    Node * current=head;
    while(current!=NULL){
        while(current->next != NULL && current->val1 ==current->next->val1){
            //deleting current->next
            current->next=temp;
            current->next=temp->next;
            free(temp);
        }
        // this loop ends when current node and next node values are different
        //or linked list ends
        current=current->next;//for traversing 
    }
}
int main(){
LinkedList l;
l.insert(1);
l.insert(2);
l.insert(2);
l.insert(2);
l.insert(3);
l.insert(3);
l.display();
duplicateDelate(l.head);
l.display();


 return 0;
}