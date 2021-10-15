#include <iostream>
using namespace std;

class Dog{
	public:
		string color,eyeColor,name,spiece;
		float height, lenght,weight;
	
		void  sit();
		void layDown();
		void shake();
		void come();
		
		void showAll();
		
		Dog(string,string,string,string,float,float,float);
};

Dog::Dog(string pColor,string pEyeColor,string pName,string pSpiece,float pHeight,float pLenght,float pWeight){
	color = pColor;
	eyeColor=pEyeColor;
	name=pName;
	spiece=pSpiece;
	height=pHeight;
	lenght=pLenght;
	weight=pWeight;
}

void Dog::sit(){
	cout<<"Pies usiad³\n";
}

void Dog::layDown(){
	cout<<"Pies siê po³o¿y³\n";
}

void Dog::shake(){
	cout<<"Pies zrobi³ shake truskawkowy\n";
}

void Dog::come(){
	cout<<"Pies przyszed³\n";
}

void Dog::showAll(){
	cout<<"Kolor: "<<color<<"\nKolor oczu: "<<eyeColor
		<<"\nPies wabi siê: "<<name
		<<"\nPies jest resy: "<<spiece
		<<"\nPies ma wyniary: "<<height<<"m "<<lenght<<"m"
		<<"\nPies wa¿y: "<<weight<<"kg"<<endl;
	sit();
	layDown();
	shake();
	come();
}

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Dog dszorcz("Czerwony","Brak","Dszorcz","Nieznana",1233,0.1,2222222);
	dszorcz.showAll();
	
	return 1;
}
