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
		"\nObw�d: "<<Obwod()<<endl;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	//klasa prostok�t
	//2 wla�ciwo�ci
	//prototypy pole, obw�d, zwracaj�cy pole, zwracaj�cy obw�d, wy�wietlaj�cy dane pola, wy�wietlaj�cy d� bok�w oraz pole i obw�d
	//u�ytkownik daje dane z klawiatury
	Rectengle prostokat;//=Rectengle();
	cout<<"Podaj bok a\n";
	cin>>prostokat.a;
	cout<<"Podaj bok b\n";
	cin>>prostokat.b;
	prostokat.showAllData();
	
	
	
	return 0;
}
