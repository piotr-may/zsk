#include<iostream>
using namespace std;

class Worker{
    private:
    string name, surname;
    public:
   

    Worker(){
        cout<<"kosnstruktor domyœlny z klasy baz"<<endl;
        name = "Imie";
        surname = "Nazwisko";
    }

    Worker(string pName, string pSurname){
        name = pName;
        surname = pSurname;
        cout<<"Konstruktor parametryczny z klasy baz"<<endl;
    }

    void setName(string p_name){
        name = p_name;
    }

    void setSurname(string p_surname){
        surname = p_surname;
    }

    string getName(){
        return name;
    }

    string getSurname(){
        return surname;
    }

    string getData(){
        return "Imiê i nazwisko" + name + " " + surname + "\n\n";
    }
};

class Teacher : public Worker
{
private:
    string subjectInSchool;
public:
    
    Teacher(){
        cout<<"konstruktor domyœlny klasy Teacher\n\n";
        setName("Imie");
        setSurname("Nazwisko");
        subjectInSchool = "Przedmiot";
    }
    Teacher(string pName, string pSurname, string pSubjectInSchool){
        setName(pName);
        setSurname(pSurname);
        subjectInSchool = pSubjectInSchool;
        cout<<"konstruktor parametryczny klasy Teacher\n\n";
    }
    string getData(){
        return "Imiê i nazwisko " + getName() + " " + getSurname()
             + "\n"+"Przedmiot "+ subjectInSchool+"\n";
    }

    void setSubjectInSchool(string pSubjectInSchool){
        subjectInSchool = pSubjectInSchool;
    }

    string getSubjectInSchool(){
        return subjectInSchool;
    }
};



int main(){
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;
    cout<<pracownik.getData();
    Worker pracownik1 ("Janusz", "kowalski");
    cout<<pracownik1.getData();
    Teacher pracownik2;
    cout<<pracownik2.getData();

    Teacher pracownik3("Jan", "Nowak", "Polski");
    cout<<pracownik3.getData();
    
    
    


    // Teacher nauczyciel;
}