//Stacks using Linked List (Name for class: StackLL) (push, pop, size, isEmpty, top)


#include <iostream>
#include "LL.cpp"

using namespace std;

class StackLL{
    public:
    Node * top;
//forming a object of linked list
    LinkedList l1;
    StackLL(){
        top = NULL;
    }
//..............................................................
   // insert on top
    void push(int value){
        // void insertAt(int value){
        l1.insertAthead(value);
        //top = new_head;
      top = l1.head  ;
    }
//........................................................
    // delete at  the top
    int pop(){

	int temp = l1.head->data;
        l1.deletpos(1);
        //top = new_head;
        top = l1.head;
	return temp;
    }

//................................................................................
//just showing the list is empty or not
    bool isEmpty(){
        if(top == NULL) return true;
        return false;
    }
//......................................................
    int size(){ l1.count();
    
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



/*

int main(){
    StackLL sl1;

cout<<"entering five numbers in stack"<<endl;
    for(int i = 0; i < 5 ; i++)
        sl1.push(i);
	sl1.display();

	cout<<"deleting first element"<<endl;
	sl1.pop();
    sl1.display();

   if(sl1.isEmpty()==true)
   cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
   
    sl1.size();
   cout<<"top of the stack is"<<endl;
    sl1.topDisplay();
    sl1.display();
}*/
