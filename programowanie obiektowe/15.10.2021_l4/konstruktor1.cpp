#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd,mm,yyyy;
};

class Worker {
	public:
		unsigned int id ;
		string name, surname;
		Date dateBridthday;
		
		void getData();
		
		Worker();
};
	
void Worker::getData(){
		cout<<"Id: "<<id<<"\nImiê i nazwisko: "<<name
		<<" "<<surname<<"\nData urodzenia: "<<dateBridthday.dd<<"-"
		<<dateBridthday.mm<<"-"<<dateBridthday.yyyy;
}

Worker::Worker(){
	id=123;
	name="Janusz";
	surname="Nowak";
	dateBridthday={15,10,2021};
}

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Worker nowak;
	nowak.getData();
	
	
	return 0;
}
