#include<iostream>

using namespace std;

class Worker{
   private:
      string name {""}, surname {""};
   public:
   void setName(string pName){
      name = pName;
   }

   void setSurname(string pSurname){
      surname = pSurname;
   }

   string getName(){
      return name;
   }

   string getSurname(){
      return surname;
   }

   string getData(){
      return name + "" + surname;
   }

};

class Teacher : public Worker{
private:
   string schoolSubject {""};
public:
   void setSchoolSubject(string pSchoolSubject){
      schoolSubject=pSchoolSubject;
   }
   string getSchoolSubject(){
      return schoolSubject;
   }

   string getData(){
      return getName() + " " + getSurname() + " " + schoolSubject + "\n";
   }

};

class Supervising : public Teacher{
private:
   string schoolClass{""};
public:
   void setSchoolClass(string pSchoolClass){
      schoolClass=pSchoolClass;
   }
   string getSchoolClass(){
      return schoolClass;

   }

   string getData(){
      return getName() + " " + getSurname() + " " + getSchoolSubject() +" "+schoolClass+ "\n";
   }
};

int main(){
   setlocale(LC_CTYPE, "polish");

   Teacher nauczyciel;
   nauczyciel.setName("Janusz");
   nauczyciel.setSurname("Nowak");
   nauczyciel.setSchoolSubject("Obiektowe");
   cout<<nauczyciel.getData();

   Supervising wychowawca;
   wychowawca.setName("Marian");
   wychowawca.setSurname("Kura");
   wychowawca.setSchoolSubject("Polski");
   wychowawca.setSchoolClass("3C");
   cout<<wychowawca.getData();


	return 0;
}
