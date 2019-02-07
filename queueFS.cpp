//Implement a queue using two stacks.
#include <iostream>
#include "stackLL.cpp"

using namespace std;

class Queuefs{

public:
    Node * front;
    Node * end;
    StackLL s1,s2;
    Queuefs(){
        front= NULL;
        end=NULL;
    }
//...............................................
//inserting
	void enqueue(int value){
//void insertAthead
	s1.push(value);

  end = s1.top ;
}
//...............................................
//deleting at front......delete last element

    	void dequeue(){

	while (s1.top->next!=NULL){
	s2.push(s1.top->data);
	}

	s1.pop();


	while (s2.top!=NULL){
	s1.push(s2.top->data);
	
	}






/*		//deleting and storing 
		while(s1.size()!=1){
  	  s2.push((int)s1.pop());
	}
	//delete last which left
	s1.pop();
	//restore again
	while(s2.size()!=0){
	s1.push(s2.pop());     }*/

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
        s1.size();
    }
//..............................................
    void endDisplay(){

   cout<<end->data<<endl;
    }
//.................................................................
    void display(){
        s1.display();
    }

   
};



int main(){
    Queuefs qs1;

    for(int i = 0; i < 5 ; i++)
        qs1.enqueue(i);
     qs1.display();

   cout<<"deleting first element"<<endl;
    qs1.dequeue();
    qs1.display();


   if(qs1.isEmpty()==true)
   cout<<"queue is empty"<<endl;
    else cout<<"queue is not empty"<<endl<<endl;
   
    qs1.size();
   cout<<"end of the queue is"<<endl;
   
    qs1.endDisplay();
    qs1.display();
}
