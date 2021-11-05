#include<iostream>

using namespace std;

class Animal{
	public:
		static int s_count;
		
	
		Animal(){
			s_count++;
			cout<<"Iloœæ obiektów: "<<s_count<<endl;
		}
		
		~Animal(){
			s_count--;
			cout<<"Iloœæ obiektów: "<<s_count<<endl;
		}
};

int Animal::s_count = 0;

int main() {
	setlocale(LC_CTYPE, "polish");
	
	cout<<"Iloœæ obiektów: "<<Animal::s_count<<endl;
	Animal dog;
	Animal cat;
	
	Animal *p_dog = new Animal();
	delete p_dog;
	
//	Animal dog2;
//	Animal dog3;
//	Animal dog4;
//	Animal dog5;
//	Animal dog6;
//	Animal dog7;
//	Animal dog8;
//	Animal dog9;
//	Animal dogl0;
//	Animal dog11;
//	Animal dog12;
	
	return 0;
}
