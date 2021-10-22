#include<iostream>

using namespace std;

class Car{
	public:
		unsigned int id {10};
		string brand {"ferrari"};
		string model {"F340"};
		
		void getData();
		
		Car(unsigned int pId =5, string pBrand ="Audi", string pModel="A6");
};

void Car::getData(){
	cout<<"\nIdentyfikator: "<<id
		<<"\nMarka: "<<brand
		<<"\nModel: "<<model<<endl;
}


Car::Car(unsigned int pId, string pBrand, string pModel){
	cout<<"\nKonstruktor paramertowy\n";
	id=pId;
	brand=pBrand;
	model=pModel;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	Car car;
	car.getData();
	
	Car car1 = Car();
	car1.getData();
	
	Car car2 = Car(2321,"nieznana","XD346");
	car2.getData();
	
	Car car3(1,"Passat");
	car3.getData();
	
	Car car4 = Car(7,"Bugatti","Veyron");
	car4.getData();
	
	
	
	
	
	
	return 2;
}
