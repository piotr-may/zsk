#include<iostream>

using namespace std;

struct daneOsobowe{
	string imie, nazwisko,dataUrodzenia;
};

class Prostopadloscian{
	public:
		float a,b,c;
		
		static string mojeDane;
		
		daneOsobowe dane;
		
		float dlugosciKrawedzi();
		void setDlugosci();
		float* dlugosciKrawedzi2();
		float objetosc(){
			return a*b*c;
		};
};

string Prostopadloscian::mojeDane="Piotr May 2D grupa 1";

void Prostopadloscian::setDlugosci(){
	cout<<"Podaj d�ugo�ci kraw�dzi";
	cin>>a;
	cin>>b;
	cin>>c;
}


float Prostopadloscian::dlugosciKrawedzi(){
	return 4*a+4*b+4*c;
}


int main(){
	setlocale(LC_CTYPE,"polish");
	float T[3];
	//napisz klase o nazwie prostopad�o�cian, dodaj do tej klajy 3 zmienne instancyjne(d�ugo�ci), 
	//1 zmienn� klasow� o nazwie moje dane i przypisz do niej
	//swoje imi� nazwisko klase i grupe.
	//utw�rz prototyp o nazwie d�ugo�ciKraw�dzi, kt�ry zwr�ci nam d�ugo�� wszystkich kraw�dzi, zdefinuj go
	//utw�rz prototyp umorzliwiaj�cy ustawienie d�ugo�ci kraw�dzi przez urzytkownika, zdefiniuj go
	//utw�rz metode i zdefiniuj j� wewn�trz klasy, kt�ra zwr�ci warto�� obj�to�ci
	//utw�rz wewn�trz klasy strukture umo�liwiaj�c� przypisanie twojego imienia nazwiska i daty urodzenia.
	
	Prostopadloscian figura;
	figura.setDlugosci();
	figura.dane={"Piotr","May","31.08.2005"};
	
	cout<<"Obj�to��: "<<figura.objetosc()<<endl;
	
	
	cout<<"Dlugosci krawedzi (suma): "<<figura.dlugosciKrawedzi()<<endl;
	
	cout<<"Struktura:\nImi�: "<<figura.dane.imie<<" Nazwisko: "<<figura.dane.nazwisko<<" Data urodzenia: "<<figura.dane.dataUrodzenia<<endl;
	cout<<"\nDane zdaj�cego: "<<figura.mojeDane;
	return 0;
}
