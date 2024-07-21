#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
    data =value ;
    next = NULL;
    }
};
void AddingAtHead(Node* &head, int val){
    Node *New_Node = new Node(val);
    New_Node->next =head;
    head =New_Node;

}
void InsertAtTail(Node* &head, int val){
    Node *New_Node =new Node(val);
    Node *temp =head;
    while(temp->next/*here the temp next value should not be NULL*/!=NULL){

        temp =temp->next;

    }
    temp->next =New_Node;
    // New_Node->next =NULL; it is declared at line 21 only 

    }
    void InsertAtPosition(Node* &head, int val , int pos){
        Node *New_Node =new Node(val);
        Node *temp =head;
        if(pos==0){
            AddingAtHead(head ,val);
            return;
        }
         int current_pos=0;
        while(current_pos != pos-1){
            temp =temp->next;
            current_pos++;
        }
        temp->next =New_Node->next;
        temp->next= New_Node;
        
    }

void DeleteAtHead(Node* &head){
    Node *temp =head;
    head =head->next;
    delete temp;
}

void DeleteAtTail(Node* &head){
    Node *temp =head;
    while(temp->next->next!=NULL){
        temp =temp->next;
    }
    // temp points to second last node
    Node * second_last=temp->next;//node will be deleted
    temp->next =NULL;
    free(second_last);
}

void DeleteAtPosition(Node* &head, int pos){
    Node *temp =head;
    if(pos==0){
        DeleteAtHead(head);
        return;
    }
    int current_pos=0;
    while(current_pos != pos-1){
        temp =temp->next;
        current_pos++;
    }
    Node * second_last=temp->next;//node will be deleted
    temp->next =second_last->next;
    free(second_last);
}
void display (Node* head){
    Node*temp =head;
    while(temp!=NULL){
        // cout<<temp->data/*this data is declared at starting in class */<<"->";
        cout<<temp->data/*this data is declared at starting in class */<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

Node*head = NULL ;
 AddingAtHead(head,2);
 display(head);
 AddingAtHead(head,1);
 display(head);
 InsertAtTail(head,3);
 display(head);
 InsertAtPosition(head,4,3);
 display(head);
 DeleteAtHead(head);
 display(head);
 DeleteAtTail(head);
 display(head);
 DeleteAtPosition(head,1);
 display(head);
 return 0;
}