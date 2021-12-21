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

int main(){
	setlocale(LC_CTYPE, "polish");
	
	A objectA;
	B objectB;
	
	objectA.var_from_classA = 32;
	objectB.var_from_classA = 67;
	
	cout<<objectA.var_from_classA<<endl;
	cout<<objectB.var_from_classA<<endl;
	
	return 0;
}
