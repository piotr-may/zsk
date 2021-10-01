#include<iostream>

using namespace std;

struct Date{
	unsigned short int dd,mm, yyyy;
};

class Worker{
	public:
		unsigned int id {};
		string name {}, surename {};
		Date dateBirdthday {};
		
		void showAllData();
		void setData(unsigned int id1,string name1, string surename1,Date dateBirdthday1); 
};

void Worker::showAllData(){
	cout<<"Dane pracownika:\nIdentyfikator pracownika: "<<id
	<<"\nImie i Nazwisko: "<<name<<" "<<surename
	<<"\nData urodzenia: "<<dateBirdthday.dd
	<<"-"<<dateBirdthday.mm
	<<"-"<<dateBirdthday.yyyy<<"r.\n";
};

void Worker::setData(unsigned int id,string name,string surename,Date dateBirdthday){
	Worker::id=id;
	Worker::name=name;
	Worker::surename=surename;
	Worker::dateBirdthday=dateBirdthday;
};

int main(){
	setlocale(LC_CTYPE,"polish");
	Worker pracownik;
	Date bridthDate {15,2,1912};
	pracownik.setData(8,"Janusz","Nowak",bridthDate);
	
	pracownik.showAllData();
		
	return 0;
}
