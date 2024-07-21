// deleting the element from last k postion
//make two pointer 
//second pointer must be k distance far from pointer 1
#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node *next;
    Node(int data){
        val=data;
        next=NULL;
    }

};
class LinkedList{
    public:
    Node *head;
    LinkedList(){
        head=NULL;
    }
    void insert(int value){
        Node * NewNode= new Node(value);
        if (head==NULL){
            head=NewNode;
            return;
        }
        else{
            Node*temp=head;
            while (temp->next!=NULL){
                temp=temp->next;
            }
        temp->next=NewNode;
        }

    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
void deletingElementFromLastPosition(Node* &head1,int k){
    Node *temp1 =head1;
    Node *temp2=head1;
    int count=k;
    while(count--){
        temp2=temp2->next;
    }
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    Node * temp3=temp1->next;
    temp1->next=temp3->next;
    free(temp3);


}
int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.display();
    deletingElementFromLastPosition(l1.head,2);
    l1.display();
}