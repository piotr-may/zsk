#include <iostream>
using namespace std;

class Car{
	unsigned int id;
	public:
		
		string brand;
		string model;
		
		void getData();
		
		Car();
		Car(unsigned int pId);
		Car(unsigned int pId, string pBrand, string pModel);
		
};

Car::Car():
	id {0},
	brand {"MARKA"},
	model {"MODEL"}
{
	cout<<"\nKonstruktor domyœlny"<<endl;
}

Car::Car(unsigned int pId){
	id=pId;
}

Car::Car(unsigned int pId, string pBrand, string pModel):
	id{pId},
	brand{pBrand},
	model{pModel}
{
	cout<<"\nKonstruktor parametryczny"<<endl;
}


void Car::getData(){
	cout<<"Identyfikator: "<<id
		<<"\nMarka: "<<brand
		<<"\nModel: "<<model<<endl;
}



int main(){
	setlocale(LC_CTYPE,"polish");
	Car car1;
	car1.getData();
	
	Car car=Car();
	car.getData();
	
	Car car2(10,"Fiat","Multipla");
	car2.getData();
	
	Car car3=Car(198,"Farrari","AFDS2");
	car3.getData();
	
	Car car4=Car(19);
	car4.getData();
	
	
	
   return 0;
}
