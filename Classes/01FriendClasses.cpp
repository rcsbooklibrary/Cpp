#include<iostream>
using namespace std;


	class MyClass{
		int a;
		int b;
		public:
		MyClass(int i, int j) {a=i,b=j;}
		friend class Mult;
	};

	class Mult{
		public:
			int mul(MyClass x);
	};


	int Mult::mul(MyClass x){
		return x.a*x.b;
	}

int main()
{
	MyClass ob (10,20);
	Mult k;
	cout << k.mul(ob) << "\n";
	return 0;
}
