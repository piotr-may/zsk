#include<iostream>

using namespace std;

class School {
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surename;
		void getData();
		void setNameSurename(string name,string surename);
};

void School::getData(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surename<<endl;
}

void School::setNameSurename(string pName,string pSurename){
	name=pName;
	surename=pSurename;
}

string School::s_school = "ZSK";
string School::s_jobPosition="student";

int main(){
	setlocale(LC_CTYPE,"polish");
	cout<<School::s_school<<endl
		<<School::s_jobPosition<<endl;
	
	School kowal;
	kowal.setNameSurename("Janusz","Nowak");
	kowal.getData();
	
	School::s_jobPosition="Wyk³adowca";
	cout<<"Nowe stanowisko: "<<kowal.s_jobPosition<<endl;
	kowal.s_jobPosition="Dziekan";
	cout<<"Nowe stanowisko: "<<kowal.s_jobPosition<<endl;
	cout<<"Nowe stanowisko: "<<School::s_jobPosition<<endl;
	
	
	
	return 0;
}
