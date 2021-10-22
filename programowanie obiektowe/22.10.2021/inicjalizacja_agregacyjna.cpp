#include<iostream>

using namespace std;

class Car{
	public:
		unsigned int id;
		string brand;
		string model;
		
		void getData();
		
		Car();
		
		Car(unsigned int pId, string pBrand, string pModel);
};

Car::Car(){
	id= 0;
	brand="Domyœlna marka";
	model="Domyœlny model";
	cout<<"Konstruktor domyœlny\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
	cout<<"Konstruktor parametryczny\n";
}

void Car::getData(){
	cout<<"\nIdentyfikator: "<<id
		<<"\nMarka: "<<brand
		<<"\nModel: "<<model<<endl;
}


int main(){
	setlocale(LC_CTYPE,"polish");
	
	Car car = Car{8,"Fiat","Panda"};
	car.getData();
	
	Car car1(8,"Woltswagen","Panda");
	car1.getData();
	
	
	return 2;
}
