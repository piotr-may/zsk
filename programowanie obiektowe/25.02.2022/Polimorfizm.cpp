#include <iostream>

using namespace std;

//Klasa abstrakcyjna
class Character{
	public:
	virtual void go() = 0;
	virtual void stop() = 0;
};

class Human : public Character{
	public:
	void go(){
		cout<<"Idzie cz�owiek."<<endl;
	}
	void stop(){
		cout<<"Stoi cz�owiek."<<endl;
	}
};

class Bear : public Character{
	public:
		void go(){
		cout<<"Idzie nied�wied�."<<endl;
		}
		void stop(){
			cout<<"Stoi nied�wied�."<<endl;
		}
	
};

class SuperHero : public Character{
	public:
		void go(){
		cout<<"Idzie superbohater."<<endl;
	}
};

int main(){
	setlocale(LC_CTYPE, "polish");
	Bear nie;
	Human czlowiek;
	Character *wskaznik = &czlowiek;	
	wskaznik->go();
	wskaznik = &nie;
	wskaznik->go();
	wskaznik->stop();
	return 0;
}
