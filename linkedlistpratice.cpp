#include<iostream>
using namespace std;
class Node{
public:
 int val;
 Node*next;
 Node(int data){
    val=data;
    next=NULL;
   
  }
};
class LinkedList{
    public:
    Node*head;
    LinkedList(){
        head=NULL;
    }
    void insert(int value){
        Node*newNode=new Node(value);
        if(head==NULL){
         head=newNode;
            return;
        }
       
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
            
           
        
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.display();
    

 return 0;
}