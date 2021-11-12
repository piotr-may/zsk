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
		"\nObw贸d: "<<Obwod()<<endl;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	//klasa prostok膮t
	//2 wla砤沜iwo渨o渃i
	//prototypy pole, obw贸d, zwracaj膮cy pole, zwracaj膮cy obw贸d, wy艣wietlaj膮cy dane pola, wy艣wietlaj膮cy d艂 bok贸w oraz pole i obw贸d
	//u偶ytkownik daje dane z klawiatury
	Rectengle prostokat;//=Rectengle();
	cout<<"Podaj bok a\n";
	cin>>prostokat.a;
	cout<<"Podaj bok b\n";
	cin>>prostokat.b;
	prostokat.showAllData();
	
	
	
	return 0;
}
