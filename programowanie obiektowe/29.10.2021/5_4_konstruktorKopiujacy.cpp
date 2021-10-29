#include <iostream>
using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA,double pSideB);
		Rectangle(const Rectangle&);
		
		void getSides();
		void catchSides(double&, double&);
		void setSider(double sideA, double sideB);
		double area();
		double circuit();
};

Rectangle::Rectangle(){
	cout<<"Konstruktor domyœlny"<<endl;
}

Rectangle::Rectangle(double pSideA,double pSideB){
	cout<<"Konstruktor parametryczny"<<endl;
	sideA=pSideA;
	sideB=pSideB;
}

Rectangle::Rectangle(const Rectangle& model){
	cout<<"Konstruktor kopiuj¹cy"<<endl;
	sideA=model.sideA;
	sideB=model.sideB;
}

void Rectangle::getSides(){
	cout<<"Bok a: "<<sideA<<"\nBok b: "<<sideB<<endl;
}

void Rectangle::catchSides(double &pSideA, double &pSideB){
	pSideA = sideA;
	pSideB = sideB;
}

void Rectangle::setSider(double pSideA, double pSideB){
	sideA = pSideA;
	sideB = pSideB;
}

double Rectangle::area(){
	return sideA*sideB;
}
double Rectangle::circuit(){
	return 2 * sideA + 2 * sideB;
}

Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	double a=2, b=3;
	
	cout<<"Pierwszy prostok¹t: "<<endl;
	Rectangle prostokat1(20,30);
	prostokat1.getSides();
	prostokat1.catchSides(a,b);
	prostokat1.getSides();
	cout<<a<<" "<<b<<endl;
	
	cout<<"\nDrugi prostok¹t: "<<endl;
	Rectangle prostokat2=prostokat1;
	prostokat2.getSides();
	prostokat2.catchSides(a,b);
	prostokat2.getSides();
	cout<<a<<" "<<b<<endl;
	
	cout<<"\nTrzeci prostok¹t: "<<endl;
	Rectangle prostokat3(prostokat1);
	prostokat3.getSides();
	prostokat3.catchSides(a,b);
	prostokat3.getSides();
	cout<<a<<" "<<b<<endl;
	
	cout<<"\nCzwarty prostok¹t: "<<endl;
	Rectangle prostokat4;
	prostokat4=copyRectangle(prostokat1);
	prostokat4.getSides();
	prostokat4.catchSides(a,b);
	prostokat4.getSides();
	cout<<a<<" "<<b<<endl;
	prostokat4.setSider(43,5);
	cout<<a<<" "<<b<<endl;
   return 0;
}
