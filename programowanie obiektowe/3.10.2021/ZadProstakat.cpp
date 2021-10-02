#include<iostream>
using namespace std;
class Rectengle{
	public:
	float a;
	float b;
	
//	Rectengle(float Ia,float Ib)
//		:a(Ia),b(Ib){}
		
	
	float Pole();
	float Obwod();
	void showAllData();
};

float Rectengle::Pole(){
	return a*b;
}
float Rectengle::Obwod(){
	return 2*a+2*b;
}
void Rectengle::showAllData(){
	cout<<"Bok a: "<<a<<
		"\nBok b: "<<b<<
		"\nPole: "<<Pole()<<
		"\nObwód: "<<Obwod()<<endl;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	//klasa prostokąt
	//2 wlaściwości
	//prototypy pole, obwód, zwracający pole, zwracający obwód, wyświetlający dane pola, wyświetlający dł boków oraz pole i obwód
	//użytkownik daje dane z klawiatury
	Rectengle prostokat;//=Rectengle();
	cout<<"Podaj bok a\n";
	cin>>prostokat.a;
	cout<<"Podaj bok b\n";
	cin>>prostokat.b;
	prostokat.showAllData();
	
	
	
	return 0;
}
