
#include <iostream>
using namespace std;

// Generic Programming - Ignore 

class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(){
        next = NULL;
    }

};
//.............................................................

class LinkedList{
    // Head + Circles inside linked with each other
    public:
    // Head -> Node type ptr
    Node * head;
    Node * tail;

    // Construct
    LinkedList(){
        head = NULL;
        tail = NULL;
    } 
    // Circles inside linked with each other
    // Rules how circles will be linked

    // Insert
//...............................................................
    void insert(int value){
       // If 1st Node is added
       Node * temp = new Node; 
       // Insert value in the node
       temp->data = value;
       // 1st Node only.
       if(head == NULL){
            head = temp;
       }
       // Any other Node only.
       else{
            tail->next = temp;
       }
       tail = temp;
    } 
//..............................................................
    void insertAt(int pos, int value){
        // Reach the place before the pos
        Node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current->next;
        }

        // Create a node
        Node * temp = new Node;
        temp -> data = value;


        // Moving ptrs like magic ! if not head
        temp->next = current->next;
        current->next = temp;
        
        // Update the code for 1st position

    }
//.........................................................
//INSERTING at head
  void insertAthead(int value){
        
        // Create a node
        Node * temp = new Node;
        temp -> data = value;


        // Moving ptrs like magic ! if not head
        temp->next = head;
       head = temp;
        
        // Update the code for 1st position

}
//................................................................

    // Deletion of last element
    void delet(){
        // store the tail in temp
        Node * temp = tail;
        // before tail has to point to null
        Node * current = head;
        while(current->next != tail){
            current = current->next;
        }
        current->next = NULL; 

        // update tail
        tail = current;
        // delete temp
         delete temp;
    }
//..........................................
//delete a node at any position pos
 void deletpos(int pos){
       
       //reach the position
        Node * current = head;
//....................


  //difine new pointer store pos address
     head=current->next;
    delete current;



 /* int i=1;
        while(i<pos-1){
      i++;
     current = current->next;
     }

       //difine new pointer store pos address
    Node * ptr;
   ptr=current-> next;
    current->next=ptr->next;

        
       
        // delete temp
         delete ptr;*/
    }

//.......................................................
    // Display
    void display(){
        Node * current = head;
        while(current!= NULL){//if we write (current ->next !=null )then it will miss last element because every time current becomes current next ,at last element thats point by current have next point to null and loop not proceed to cout data
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }

//.............................................
//count the numbers in linked list
int count(){
   Node * current = head;
   int i=0;
  while(current!= NULL){
   i++;
   current = current->next;
        }
cout<<"numbers in linked list are  "<<i<<endl;
return i;
}

//........................................
//delete last position
void deletelast(){

       

 Node * current = head;
 while(current->next->next!= NULL){
   
   current = current->next;}
  

current->next=NULL;
// update tail
        tail = current;
       
}

};
/*
int main(){
//making object of class
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.display();
cout<<"delete last element"<<endl;
    l1.delet();
    l1.display();
cout<<"insert 55 at position 3"<<endl;
    l1.insertAt(3,55);
    l1.display();
cout<<"inserting 3 at head position"<<endl;
   l1.insertAthead(3);
    l1.display();
cout<<"delete position 3"<<endl;
    l1.deletpos(3);
    l1.display();
    l1.count();
   l1.display();
     return 0;
}*/

