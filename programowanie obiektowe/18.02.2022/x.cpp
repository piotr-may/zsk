#include<iostream>
using namespace std;
class Worker{
 public:
    string name, surname;
    Worker(){
        cout<<"kosnstruktor domy�llny\n";
    }
    Worker(string p_name, string p_surname){
        name = p_name;
        surname = p_surname;
    }

    string getData(){
        return "Imi� i nazwisko" + name + " " + surname + "\n\n";
    }
};

class Teacher : public Worker
{
public:
    string subjectInSchool;
    Teacher(){
        cout<<"konstruktor domy�llny klasy Teacher\n\n";
    }
    Teacher(string p_name, string p_surname, string p_subjectInSchool){
        
        cout<<"k par\n";
    }

};



int main(){
    setlocale(LC_CTYPE,"polish");
    Teacher x("","","");
    cout<<x.name;
    cout<<"--"<<x.name<<"--";
    // Teacher nauczyciel;
}