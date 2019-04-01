#ifndef _MYHEADER2_
#define _MYHEADER2_
#include <iostream>
using namespace std;

class Box{
	double length{4.0};
	double width{2.0};
	double height{3.0};
	int ax;
public:
	Box(double lengthval, double widthval){
		length = lengthval;
		width  =  widthval;
		cout << "Constructor with Two params" << "\n";
		ax =2;
	}

	Box(double lengthval, double widthval, double heightval){
		length = lengthval;
		width = widthval;
		height = heightval;
		cout << "Constructor with Three params" << "\n";
		ax=3;
	}
	~Box(){
		cout << "Destructor for" << ax << "\n";
	}

	double volume();
	
};


#endif


