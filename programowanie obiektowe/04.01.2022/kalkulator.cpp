#include<iostream>
#include<cmath>

using namespace std;

class Calculator{
	public:
	
	void dislpayMenu(){
		cout<<"1-ADD\n"
			<<"2-SUB\n"
			<<"3-MUL\n"
			<<"4-DIV\n"
			<<"5-POW\n"
			<<"6-Exit"
			<<endl;
	}
	
	float enterData(){
		float x;
		cout<<"Podaj liczbe: ";
		cin>>x;
		
		while(cin.fail()){
			cout<<"Wrong Data\n";
			cin.clear();
			cin.ignore(1000, '\n');
			cout<<"Podaj liczbe: ";
			cin>>x;
		}
		return x;
	}
	
	int menu(){
		float x,y,n;
		while (true){
			dislpayMenu();
			n=enterData();
			switch((int)n){
				case 1:
					x=enterData();
					y=enterData();
					add(x,y);
					break;
				case 2:
					x=enterData();
					y=enterData();
					substaction(x,y);
					break;
				case 3:
					x=enterData();
					y=enterData();
					multiply(x,y);
					break;
				case 4:
					x=enterData();
					y=enterData();
					div(x,y);
					break;
				case 5:
					x=enterData();
					y=enterData();
					power(x,y);
					break;
				case 6:
					cout<<"Wychodze"<<endl;
					return 0;
					break;
			}
		}
	}
	
	void add(float x, float y){
		cout<<x<<" + "<<y<<" = "<<x+y<<endl;
	}
	void substaction(float x, float y){
		cout<<x<<" - "<<y<<" = "<<x-y<<endl;
	}
	void multiply(float x, float y){
		cout<<x<<" * "<<y<<" = "<<x*y<<endl;
	}
	void div(float x, float y){
		cout<<x<<" / "<<y<<" = "<<x/y<<endl;
	}
	void power(float x, float y){
		cout<<x<<" ^ "<<y<<" = "<<pow(x,y)<<endl;
	}

	Calculator(){
		menu();
	}

};

int main(){
	Calculator x;
	
	return 0;
}
