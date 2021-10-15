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
		
		Worker(int,string,string,Date);
};
	
void Worker::getData(){
		cout<<"Id: "<<id<<"\nImi� i nazwisko: "<<name
		<<" "<<surname<<"\nData urodzenia: "<<dateBridthday.dd<<"-"
		<<dateBridthday.mm<<"-"<<dateBridthday.yyyy;
}

Worker::Worker(int pId, string pName,string pSurname,Date pDateBridthday){
	id=pId;
	name=pName;
	surname=pSurname;
	dateBridthday=pDateBridthday;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Worker nowak(999,"Janusz","Nowak",{12,65,1401});
	nowak.getData();
	
	
	
	return 0;
}
