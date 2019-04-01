/*Example pgm to demonstrate the Friend function behaviour. If the friend fuction is defined, then it means that particular function is not part of any other class. Friend function will have access to the private members*/

#include<iostream>
using namespace std;

#define FRIEND_FUNC 

class myclass{
	int a,b;
public:
#ifdef FRIEND_FUNC
	friend int sum(myclass x);
#else
	int sum(myclass x);
#endif
	void set_ab(int i , int j);
};


void myclass::set_ab(int i,int j)
{
	a=i;
	b=j;
}

#ifdef FRIEND_FUNC
int sum(myclass x)
{
	return x.a+x.b;
}
#else
int myclass::sum(myclass x)
{
	return x.a+x.b;
}
#endif

int main()
{
	myclass n;
	n.set_ab(3,4);
#ifdef FRIEND_FUNC
	cout << "Friend Function defined" << "\n";
	cout << sum(n);
#else	
	cout << n.sum(n);
#endif
 return 0;
}
