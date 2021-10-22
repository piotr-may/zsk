#include<iostream>

using namespace std;

class Car{
	public:
		unsigned int id {10};
		string brand {"ferrari"};
		string model {"F340"};
		
		void getData();
		
		Car();
		Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"\nIdentyfikator: "<<id
		<<"\nMarka: "<<brand
		<<"\nModel: "<<model<<endl;
}

Car::Car(){
	//cout<<"Konstruktor bezparametrowy\n";
	id=3;
	brand="Fiat";
	model="126p";
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
	Car car1 = Car(2321,"nieznana","XD346");
	car1.getData();
	Car car2 = Car();
	car2.getData();
	
	
	return 2;
}
