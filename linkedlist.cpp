 #include<iostream>
 using namespace std;
 class Node{
    public:
    int val ;
    Node *next;
    Node(int dat){// constructor
        val =dat;
        next = NULL;
    }
   

 };
// adding element at head  
  void insertAtHead(Node* &head, int val){
        Node* new_node =new Node(val);
        new_node-> next = head;
        head = new_node;
  }
    
    /*adding element at tail
    */
    void insertAtTail(Node* &head, int val){
        Node* new_node= new Node(val);
        Node* temp=head;
        while(temp->next!=NULL){
            temp =temp->next;
        }// temp has reached end 
        temp->next=new_node;
            }


    void insertAtPosition(Node* &head,int val , int pos){
        if(pos==0){
            insertAtHead(head,val);
            return;
        }
        Node* new_node = new Node(val);
        Node* temp=head;
        int current_pos=0;
        while(current_pos!=pos-1){
            temp=temp->next;
            current_pos++;
        }
        // temp is pointing to node at pos-1
        new_node->next = temp->next;
        temp->next=new_node;

        // time complexity=o(n)
    }

    void updateAtPosition(Node* &head, int k , int val){
        Node* temp=head;
        int current_pos=0;

        while(current_pos!=k){
            temp=temp->next;
            current_pos++;
        }
        //temp is pointing to k
        temp->val=val;
        // time complexity=o(n)
    }
    


void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
   free(temp);
    // time complexity=o(1)
}

void deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;

    }
    // now second last is pointing to second last node
    Node*temp = second_last->next;
    second_last->next=NULL;
    free(temp);

    
}

    void deleteAtPosition(Node* &head, int pos){
      if(pos==0){
        deleteAtHead(head);
        return;
      }
      int current_pos=0;
      Node* prev = head;
      while(current_pos!=pos-1){
        prev=prev->next;
        current_pos++;
      }
      // prec is pointing to node a pos-1
      Node* temp=prev->next;//node to be deleted
      prev->next=prev->next->next;
      free(temp);

        // time complexity=o(n)
    }


    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"-> ";
            temp = temp->next;//moving the temp pointer to next 
        }
        cout<<"null"<<endl;
    }

    
 int main(){

    Node* head =NULL;
    insertAtHead(head,2);//
    display(head);
    insertAtHead(head,1);//
    display(head);

// Node* head =NULL;
insertAtTail(head,3);//
display(head);


insertAtPosition(head,4,1);//
display(head);

updateAtPosition(head,2,5);
display(head);
deleteAtHead(head);
display(head);
deleteAtTail(head);
display(head);
deleteAtPosition(head,1);


 /*Node *n = new Node(1);
 cout<<n->val <<" "<<n->next<<endl;*/
  return 0;
 }