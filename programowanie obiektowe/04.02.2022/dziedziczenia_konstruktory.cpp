#include<iostream>
using namespace std;

class Worker{
 public:
    string name, surname;

    Worker(){
        cout<<"kosnstruktor domyœlny z klasy baz"<<endl;
    }

    Worker(string pName, string pSurname){
        name = pName;
        surname = pSurname;
        cout<<"Konstruktor parametryczny z klasy baz"<<endl;
    }

    string getData(){
        return "Imiê i nazwisko" + name + " " + surname + "\n\n";
    }
};

class Teacher : public Worker
{
public:
    string subjectInSchool;
    Teacher(){
        cout<<"konstruktor domyœlny klasy Teacher\n\n";
    }
    Teacher(string pName, string pSurname, string pSubjectInSchool){
        name = pName;
        surname = pSurname;
        subjectInSchool = pSubjectInSchool;
        cout<<"konstruktor parametryczny klasy Teacher\n\n";
    }
    string getData(){
        return "Imiê i nazwisko" + name + " " + surname
             + "\n"+"Przedmiot "+ subjectInSchool+"\n";
    }
};



int main(){
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;
    Worker pracownik1 ("Janusz", "kowalski");

    Teacher pracownik2("Jan","Nowak","Obiktowg");
    Teacher pracownik3;
    Teacher pracownik4 = Teacher("dh", "hdf", "43");
    
    


    // Teacher nauczyciel;
}