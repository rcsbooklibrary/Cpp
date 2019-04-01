//#include "myheader.h"

#include "myheader.h"


int main()
{
	Box TestBox2{6.0,5.0};
	cout << "volume is "<< TestBox2.volume() << "\n"; 
	Box TestBox{6.0,5.0,4.0};
	cout << "volume is "<< TestBox.volume() << "\n"; 
	return 0;
}
