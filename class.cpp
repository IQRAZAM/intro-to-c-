////SIMPLE INSERTION IN LINK LIST  singly link list 
/*#include<iostream>
using namespace std;
class linkedlist{
    private:
    struct Node{
        int data ;
        Node* next_address;
    };
    Node* head ;
    public:
    linkedlist(){
         head = NULL ;
    }
    void insertlist(int n);
    void display();

};
void linkedlist :: insertlist(int n){
    Node* new_node = new Node;
    new_node -> data = n;
    new_node -> next_address = NULL;
    if(head == NULL){
        head = new_node ;
    }else{
        Node* nodeptr = head ;
        while(nodeptr->next_address != NULL){
            nodeptr = nodeptr->next_address;
        }
        nodeptr->next_address = new_node ;

    }
}
void linkedlist :: display(){
    Node* nodeptr = head ;
    while(nodeptr != NULL){
        cout<<nodeptr->data<<" -> ";
        nodeptr = nodeptr->next_address;
    }
    cout<<"NULL"<<endl;
}
int main(){
linkedlist l1;
l1.insertlist(10);
l1.insertlist(20);
l1.insertlist(30);
l1.insertlist(40);
l1.insertlist(60);
l1.display();

return 0;
}*/
///////////PRACTICING 
/*#include<iostream>
using namespace std;
class linkedlist{
    private:
    struct Node{
        int data;
        Node* next_address ;
    };
    Node* head ;
    public:
    linkedlist(){
        head = NULL ;
    }
    void insertion(int n);
    void display();
};
void linkedlist :: insertion(int n){
    Node* new_node = new Node;
    new_node->data = n;
    new_node->next_address = NULL ;
    if(head == NULL){
        head = new_node ;
    }else{
        Node* nodeptr = head;
        while(nodeptr->next_address != NULL){
            nodeptr = nodeptr->next_address;
        }
        nodeptr->next_address = new_node;
    }
}
void linkedlist :: display(){
    Node* nodeptr = head ;
    while(nodeptr != NULL){
        cout<<nodeptr->data<<" -> ";
        nodeptr = nodeptr->next_address;
    }
    cout<<"NULL"<<endl;
}
int main(){
linkedlist l1;
l1.insertion(20);
l1.insertion(40);
l1.insertion(60);
l1.insertion(80);
l1.display();

return 0;
}*/
////Circular linkelist 
/*nclude <iostream>
using namespace std;

class linkedlist {
private:
    struct Node {
        int data;
        Node* next_address;
    };
    Node* head;

public:
    linkedlist() {
        head = NULL;
    }
    void insertion(int n);
    void display();
};

void linkedlist::insertion(int n) {
    Node* new_node = new Node;
    new_node->data = n;
    new_node->next_address = NULL;

    if (head == NULL) {
        head = new_node;
        new_node->next_address = head; // Point to itself
    } else {
        Node* nodeptr = head;
        while (nodeptr->next_address != head) { // Traverse until we reach the head
            nodeptr = nodeptr->next_address;
        }
        nodeptr->next_address = new_node; // Link the last node to the new node
        new_node->next_address = head; // Link the new node to the head
    }
}

void linkedlist::display() {
    if (head == NULL) {
        cout << "List is empty." << endl; // Added newline for better formatting
    } else {
        Node* nodeptr = head;
        do {
            cout << nodeptr->data << " -> ";
            nodeptr = nodeptr->next_address;
        } while (nodeptr != head);
        cout << "(back to head)" << endl; // Indicate circular nature
    }
}

int main() {
    linkedlist l1;
    l1.insertion(20);
    l1.insertion(40);
    l1.insertion(60);
    l1.insertion(80);
    l1.display();

    return 0;
}*/
//INSERTION AT DIFFERENT POSITIONS OF LINKEDLIST AND ALSO DELETION IN LINEKDLIST 
//insertion in doubly linkedlist 

#include<iostream>
using namespace std;
class doubly_linkedlist{
    private:
    struct node{
      int  data;
       node* next_address;
       node* pre_address;

    };
    public:
    node* head ;
    node* tail;
    doubly_linkedlist(){
        head  = NULL ;
        tail = NULL ;
        
    }
    void insert_node(int n);
    void display();
    void del_node(int n );

    
};
void doubly_linkedlist::insert_node(int n){
    node* new_node = new node;
    new_node -> data = n ;
    new_node -> next_address = NULL;
    new_node -> pre_address =  NULL;
    if(head == NULL){
        head = new node;
        tail = new node ;
    }else{
        new_node -> pre_address = tail ;
        tail->next_address = new_node;
        tail = new_node ;
    }
}
void doubly_linkedlist::display(){
    if(head == NULL){
        cout<<"list is empty"<<endl;

    }else{
        node* nodeptr = head ;
        cout<<"forward traversal "<<endl;
        while(nodeptr != NULL){
            cout<<nodeptr->data<<endl ;
            nodeptr = nodeptr->next_address ;
        }
         nodeptr = tail ;
        cout<<"backward traversal"<<endl;
        while(nodeptr != NULL){
            cout<<nodeptr->data<<endl;
            nodeptr = nodeptr -> next_address;
        }
    }
}
void doubly_linkedlist::del_node(int n ){
    if(head == NULL){
        cout<<"no data"<<endl;
    }else if(head->data == n){
       node* nodeptr = head;
       head = head-->next_address;
       if(head!=NULL){
        head->pre_address = NULL;
       }else{
        tail = NULL;
        delete nodeptr;
       }


    }else {
        node* nodeptr = head -> next_address;
        node* pre = head;
        while(node != NULL){
            if(nodeptr->data ==n ){
                pre-> next_address = nodeptr->
            }
        }
    }
}
int main(){
doubly_linkedlist l1;
l1.insert_node(10);
l1.insert_node(20);
l1.insert_node(30);
l1.insert_node(40);
l1.display();
return 0;
}
