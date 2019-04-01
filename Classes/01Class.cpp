#include <iostream>
using namespace std;
#define STACK_SIZE 100

class stack{
	int stck[STACK_SIZE];
	int tos;
public:
	void init();
	void push(int i);
	int pop();
};


void stack::init()
{
	tos=0;
}


void stack:: push(int i)
{
	if(tos==STACK_SIZE){
	cout << "Stack is full.\n"; 
	return;
	}
	stck[tos] = i;
        tos++;
		
}

int stack:: pop()
{
	if(tos==0){
		cout << "stack underflow.\n";
			return 1;
	}
	tos--;
	return stck[tos];
}


int main()
{
	int el=0;
	stack stack1;
	stack1.init();
	stack1.push(1);	
	stack1.push(2);	
	stack1.push(4);	
	stack1.push(8);	
	el = stack1.pop();
	cout << "Popped element is" << el << "\n";
	el = stack1.pop();
	cout << "Popped element is" << el << "\n";

	el = stack1.pop();
	cout << "Popped element is" << el << "\n";
	return 0;
}
