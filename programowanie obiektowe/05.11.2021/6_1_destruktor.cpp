#include<iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		void getData();
		
		Worker();
		Worker(string name, string surname);
		
		~Worker(){
			cout<<"\nWywo�anie destruktora"<<endl;
		}
};

void Worker::getData(){
	cout<<"\nImi� i nazwisko: "<<name<<" "<<surname<<endl;
}

Worker::Worker(){
	cout<<"Konstruktor bezparametryczny\n";
}

Worker::Worker(string pName, string pSurname): 
	name {pName}, 
	surname {pSurname}
{
	cout<<"Konstruktor parametryczny\n";
}

void createObjectWorker(){
	Worker jacek = Worker("Jacek", "FSDH");
	jacek.getData();
}

int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz","Kowalski");
	nowak.getData();
	Worker kowalski = Worker("Kamil", "Nowak");
	
	createObjectWorker();
	
	cout<<"\nWska�nik\n";
	Worker *p_kowalski = new Worker("Jan", "Kowalki");
	p_kowalski->getData(); 
	delete p_kowalski;
	
	return 0;
}
