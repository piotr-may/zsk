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

class C: public B{
	public:
		int var_from_classC;
};


int main(){
	setlocale(LC_CTYPE, "polish");
	
	B objectB;
	C objectC;	
	
	objectC.var_from_classA = 20;
	objectC.var_from_classB = 30;
	
	objectB.var_from_classA = 10;

	
	cout<<objectB.var_from_classA<<endl;
	cout<<objectC.var_from_classA<<endl;
	cout<<objectC.var_from_classB<<endl;
	
	return 0;
}
