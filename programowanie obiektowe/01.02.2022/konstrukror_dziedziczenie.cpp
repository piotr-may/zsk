#include<iostream>
using namespace std;
class Worker{
 public:
    string name, surname;
    Worker(){
        cout<<"kosnstruktor domyślny";
    }
    Worker(string p_name, string p_surname){
        name = p_name;
        surname = p_surname;
    }

    string getData(){
        return "Imię i nazwisko" + name + " " + surname + "\n\n";
    }
};

class Teacher : public Worker
{
public:
    string subjectInSchool;
    Teacher(){
        cout<<"konstruktor domyślny klasy Teacher\n\n";
    }
    Teacher(string p_name, string p_surname, string p_subjectInSchool){
        name = p_name;
        surname = p_surname;
        subjectInSchool = p_subjectInSchool;
        cout<<"k par";
    }

};



int main(){
    setlocale(LC_CTYPE,"polish");
    Teacher pracownik("Jan","Nowak","g");
    // Teacher nauczyciel;
}