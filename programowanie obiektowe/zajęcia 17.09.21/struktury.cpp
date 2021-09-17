#include<iostream>
using namespace std;

struct Date{
	unsigned short int d,m, rrrr;
	
};

struct Student{
	string name,surename;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatiks[5];
};

int main(){
	setlocale(LC_CTYPE,"polish");
	Date data {17,9,2021};
	Student student {"Janusz", "Nowak", 10, data,{6, 2, 5, 4, 3}};
	cout<<"Imiê i Nazwisko"<<student.name<<" "<<student.surename
		<<"\nId: "<<student.id
		<<"\nData urodzenia: "<<student.dateBirthday.d
		<<"."<<student.dateBirthday.m<<"."<<student.dateBirthday.rrrr
		<<"\nOceny z informatyki: \n1 ocena "<<student.gradeInformatiks[0]
		<<"\n2 ocena "<<student.gradeInformatiks[1]
		<<"\n3 ocena "<<student.gradeInformatiks[2]
		<<"\n4 ocena "<<student.gradeInformatiks[3]
		<<"\n5 ocena "<<student.gradeInformatiks[4]<<endl;
	
	
	return 0;
}
