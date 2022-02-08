#include<iostream>

using namespace std;

class A{
	public:
		int var_from_classA;
};

class B{
	public:
		int var_from_classB;
};

class C{
	public:
		int var_from_classC;
};

class D: public A, public B, public C{
	public:
		int var_from_classD;
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	D objectD;
	
	objectD.var_from_classA = 10;
	objectD.var_from_classB = 20;
	objectD.var_from_classC = 30;
	objectD.var_from_classD = 40;

	
	cout<<objectD.var_from_classA<<endl;
	cout<<objectD.var_from_classB<<endl;
	cout<<objectD.var_from_classC<<endl;
	cout<<objectD.var_from_classD<<endl;
	
	return 0;
}
