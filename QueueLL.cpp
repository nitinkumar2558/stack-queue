
//Queues using Linked List (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)

#include <iostream>
#include "LL.cpp"

using namespace std;

class QueueLL{

public:
    Node * front;
    Node * end;
//forming a object of linked list
    LinkedList l1;
    QueueLL(){
        front= NULL;
        end=NULL;
    }
//...............................................
//inserting
	void enqueue(int value){
//void insertAthead
	l1.insertAthead(value);

  end = l1.head  ;
}
//...............................................
//deleting at front......delete last element
    int dequeue(){
  l1.deletelast();

}
//...................................................................
//just showing the list is empty or not
    bool isEmpty(){
        if(end== NULL) return true;
        return false;
    }
//......................................................
//size
    int size(){
        l1.count();
    }
//..............................................
    void endDisplay(){

   cout<<end->data<<endl;
    }
//.................................................................
    void display(){
        l1.display();
    }

   
};


/*
int main(){
    QueueLL ql1;

    for(int i = 0; i < 5 ; i++)
        ql1.enqueue(i);
     ql1.display();
   cout<<"deleting front element ..last one of linked list"<<endl;
    ql1.dequeue();
    ql1.display();


    if(ql1.isEmpty()==true)
   cout<<"queue is empty"<<endl;
    else cout<<"queue is not empty"<<endl;
   
    ql1.size();
   cout<<"end of the queue is"<<endl;
    ql1.endDisplay();
    ql1.display();
}*/
