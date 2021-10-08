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
	cout<<"Podaj d³ugoœci krawêdzi";
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
	//napisz klase o nazwie prostopad³oœcian, dodaj do tej klajy 3 zmienne instancyjne(d³ugoœci), 
	//1 zmienn¹ klasow¹ o nazwie moje dane i przypisz do niej
	//swoje imiê nazwisko klase i grupe.
	//utwórz prototyp o nazwie d³ugoœciKrawêdzi, który zwróci nam d³ugoœæ wszystkich krawêdzi, zdefinuj go
	//utwórz prototyp umorzliwiaj¹cy ustawienie d³ugoœci krawêdzi przez urzytkownika, zdefiniuj go
	//utwórz metode i zdefiniuj j¹ wewn¹trz klasy, która zwróci wartoœæ objêtoœci
	//utwórz wewn¹trz klasy strukture umo¿liwiaj¹c¹ przypisanie twojego imienia nazwiska i daty urodzenia.
	
	Prostopadloscian figura;
	figura.setDlugosci();
	figura.dane={"Piotr","May","31.08.2005"};
	
	cout<<"Objêtoœæ: "<<figura.objetosc()<<endl;
	
	
	cout<<"Dlugosci krawedzi (suma): "<<figura.dlugosciKrawedzi()<<endl;
	
	cout<<"Struktura:\nImiê: "<<figura.dane.imie<<" Nazwisko: "<<figura.dane.nazwisko<<" Data urodzenia: "<<figura.dane.dataUrodzenia<<endl;
	cout<<"\nDane zdaj¹cego: "<<figura.mojeDane;
	return 0;
}
