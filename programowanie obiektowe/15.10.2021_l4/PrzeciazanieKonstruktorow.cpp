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
		
		Worker(int id);
		
		Worker(int id, string name, string surname);
		
		Worker(int,string,string,Date);
};
	
void Worker::getData(){
		cout<<"Id: "<<id<<"\nImiê i nazwisko: "<<name
		<<" "<<surname<<"\nData urodzenia: "<<dateBridthday.dd<<"-"
		<<dateBridthday.mm<<"-"<<dateBridthday.yyyy<<endl;
}

Worker::Worker(int pId){
	id=pId;
}

Worker::Worker(int pId, string pName,string pSurname){
	id=pId;
	name=pName;
	surname=pSurname;
}

Worker::Worker(int pId, string pName,string pSurname,Date pDateBridthday){
	id=pId;
	name=pName;
	surname=pSurname;
	dateBridthday=pDateBridthday;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Worker nowak(999);
	nowak.getData();
	
	Worker kowalski(1341245);
	kowalski.getData();
	
	Worker areczek(12,"Areczek","23ds");
	areczek.getData();
	
	return 0;
}
