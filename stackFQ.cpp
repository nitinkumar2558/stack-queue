//implementing stack using queue

#include <iostream>
#include "QueueLL.cpp"

using namespace std;

class StackfqLL{
    public:
    Node * top;
//forming a object of queue
    QueueLL l1,l2;
    StackfqLL(){
        top = NULL;
    }
//..............................................................
   // insert on top
    void push(int value){
        // void insertAt(int value){
        l1.enqueue(value);
        //top = new_head;
      top = l1.end  ;
    }
//........................................................
    // delete at  the top
    int pop(){
//deleting and storing 
		while(l1.size()!=1){
  	  l2.enqueue((int)l1.dequeue());
	}
	//delete last which left
	l1.dequeue();
	//restore again
	while(l2.size()!=0){
	l1.enqueue(l2.dequeue());
}
	
    }

//................................................................................
//just showing the list is empty or not
    bool isEmpty(){
        if(top == NULL) return true;
        return false;
    }
//......................................................
    int size(){ l1.size();
    
    }
//..............................................
    void topDisplay(){
//displaying first element
   cout<<top->data<<endl;
    }
//.................................................................
    void display(){
        l1.display();
    }
};





int main(){
    StackfqLL sq1;

cout<<"entering five numbers in stack"<<endl;
    for(int i = 0; i < 5 ; i++)
        sq1.push(i);
	sq1.display();

	cout<<"deleting first element"<<endl;
	sq1.pop();
    sq1.display();

   if(sq1.isEmpty()==true)
   cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
   
    sq1.size();
   cout<<"top of the stack is"<<endl;
    sq1.topDisplay();
    sq1.display();
}
