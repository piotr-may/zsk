#include<iostream>

using namespace std;

class Osoba {
	public:
		string imie, nazwisko, dataUrodzenia;
		int wiek{25};
		double getDochody(){
			return dochody;
		}
		double prezenty {150};
	protected:
		double dochody;
};

class Pracownik: public Osoba{
	public: 
		string badaniaLekarskie[20];
		
		double getPensja(){
			return pensja;
		}
		Pracownik(){
			dochody = pensja;
			dochody += prezenty;
		};
		
	private:
		double pensja{3000};
	
	
};

class Student: public Osoba{
	public:
		int numerIndeksu;
		double getStypendium(){
			return stypendium;
		}
		
		Student(){
			dochody = stypendium;
		};	
	private:
		double stypendium {500};
};
class Emeryt: public Osoba{
	private:
		double emerytura{1000};	
	public:
		double getEmerytura(){
			return emerytura;
		}	
		
		Emeryt(){
			dochody = emerytura;
		};
};

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Pracownik x;
	cout<<x.getDochody();
	
	return 0;
}
