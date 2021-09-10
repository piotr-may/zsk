#include<iostream>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych cz�stkowych (pola, cechy,w�a�ciwo�ci)
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
		{cout<<"Stwo�ono obiekt Worker\n\n";
		}
		
	//deklaracja funkcji cz��kowskiej
	void showName(){
		cout<<"Imi� pracownika: "<<name<<endl;
	}

	//deklaracja (prototyp) funkcji cz��kowskiej
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
	cout<<"Narodowo��: "<<nationality
		<<"\nRok urodzenia: "<<yearBrithday
		<<"\nWzrost: "<<height<<"m"<<endl;
//	if(gender=='m') cout<<"M�szczyzna"<<endl;
//	else if(gender=='f') cout<<"Kobieta"<<endl;
//	else cout<<"-";
	switch(gender){
		case 'm': cout<<"M�szczyzna"; break;
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
