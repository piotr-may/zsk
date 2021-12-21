#include<iostream>

using namespace std;

class A{
	public:
		int var_from_classA;
};

class B: public A{
	public:
		int var_from_classB;
};

class C: public A{
	public:
		int var_from_classC;
};

class D: public A{
	public:
		int var_from_classD;
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	D objectD;
	C objectC;
	B objectB;
	
	objectD.var_from_classA = 10;
	objectC.var_from_classA = 20;
	objectB.var_from_classA = 30;

	
	cout<<objectD.var_from_classA<<endl;
	cout<<objectC.var_from_classA<<endl;
	cout<<objectB.var_from_classA<<endl;
	
	return 0;
}
