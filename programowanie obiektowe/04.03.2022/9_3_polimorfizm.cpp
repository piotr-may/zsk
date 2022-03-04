#include<iostream>

using namespace std;

class Shape{
	public:
		virtual void calculateArea() = 0;
		virtual void setA(float) = 0;
		virtual void setR(float) = 0;
};

class Circle: public Shape{
	float r;
	public:
		Circle(float radius){
			r=radius;
		}
		void calculateArea() {
			cout<<"Pole ko³a wynosi: "<<r*r*3.14<<" cm^2\n";
		}
		virtual void setA(float) {};
		virtual void setR(float radius){
			r=radius;
		}
};

class Square : public Shape{
	float a;
	public:
		Square(float sideA){
			a=sideA;
		}
		void calculateArea() {
			cout<<"Pole kwardratu wynosi: "<<a*a<<" cm^2\n";
		}
		virtual void setA(float sideA){
			a=sideA;
		}
		virtual void setR(float){
		};
};
//zmodyfikowaæ klase Quare
//
int main(){
	setlocale(LC_CTYPE, "polish");
	
	Square kw(4);
	kw.calculateArea();
	kw.setA(20);
	kw.calculateArea();
	
	Shape *wsk = &kw;
	wsk->calculateArea();
	wsk->setA(2);
	wsk->calculateArea();
	
	
	Circle cr(4);
	cr.calculateArea();
	cr.setR(20);
	cr.calculateArea();
	
	Shape *wskC = &cr;
	wskC->calculateArea();
	wskC->setR(2);
	wskC->calculateArea();
	
	return 23;
}
