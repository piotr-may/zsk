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

class E{
	public:
		int var_from_classE;
};

class F: public D, public E{
	public:
		int var_from_classF;
};

class G: public F{
	public:
		int var_from_classG;
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	B objectB;
	C objectC;
	D objectD;
	F objectF;
	G objectG;
	
	objectB.var_from_classA = 10;
	objectC.var_from_classA = 20;	
	objectD.var_from_classA = 30;
	
	objectF.var_from_classA = 40;
	objectF.var_from_classD = 50;
	objectF.var_from_classE = 60;
	objectF.var_from_classF = 70;
	
	objectG.var_from_classA = 40;
	objectG.var_from_classD = 50;
	objectG.var_from_classE = 60;
	objectG.var_from_classF = 70;
	objectG.var_from_classG = 80;

	
	cout<<objectB.var_from_classA<<endl;
	cout<<objectC.var_from_classA<<endl;
	cout<<objectD.var_from_classA<<endl;
	
	cout<<objectF.var_from_classA<<endl;
	cout<<objectF.var_from_classD<<endl;
	cout<<objectF.var_from_classE<<endl;
	cout<<objectF.var_from_classF<<endl;
	
	cout<<objectG.var_from_classA<<endl;
	cout<<objectG.var_from_classD<<endl;
	cout<<objectG.var_from_classE<<endl;
	cout<<objectG.var_from_classF<<endl;
	cout<<objectG.var_from_classG<<endl;
	
	return 0;
}
