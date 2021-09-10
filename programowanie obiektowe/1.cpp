#include<iostream>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych cz¹stkowych (pola, cechy,w³aœciwoœci)
	unsigned short int yearBrithday;
	float height;
	char gender; 
	string name;
	string surename;
	string nationality;
	
	//konstruktor
	Worker(int IyearBrithday,float Iheight,string Iname,string Isurename,string Inationality,char Igender)
		: yearBrithday(IyearBrithday),
		height(Iheight),
		name(Iname),
		surename(Isurename),
		nationality(Inationality),
		gender(Igender)
		{cout<<"Stwo¿ono obiekt Worker\n\n";
		}
		
	//deklaracja funkcji cz³¹kowskiej
	void showName(){
		cout<<"Imiê pracownika: "<<name<<endl;
	}

	//deklaracja (prototyp) funkcji cz³¹kowskiej
	void showSurename();
	void ShowAllData();	
	void showPersonality();
};

//definicja metody showSurename
void Worker::showSurename(){
	cout<<"Nazwisko Pracownika: "<<surename<<endl;
};
void Worker::ShowAllData(){
	showPersonality();
	cout<<"Narodowoœæ: "<<nationality
		<<"\nRok urodzenia: "<<yearBrithday
		<<"\nWzrost: "<<height<<"m"<<endl;
//	if(gender=='m') cout<<"Mêszczyzna"<<endl;
//	else if(gender=='f') cout<<"Kobieta"<<endl;
//	else cout<<"-";
	switch(gender){
		case 'm': cout<<"Mêszczyzna"; break;
		case 'k': cout<<"Kobieta"; break;
		default: cout<<"-";break;	
	}
};
void Worker::showPersonality(){
	showName();
	showSurename();
}

int main(){
	setlocale(LC_CTYPE,"polish");
	Worker janusz= Worker(1954,153.25f,"Janusz","Nowak","Polska",'k');
	janusz.showName();
	cout<<endl;
	janusz.showSurename();
	cout<<endl;
	janusz.showPersonality();
	cout<<endl;
	janusz.ShowAllData();
	
	return 0;
}
