#include<iostream>

using namespace std;

class Account {
	private:
		int balance = 1000;
		int debit = 500;
	public:
		int getBalance();
		int deposit(int money);
		int withdraw(int money);
};

int Account::getBalance(){
	return balance;
}

int Account::deposit(int money){
	if(money>=0){
		balance += money;
		return money;
	}
	else{
		cout<<"B³ad w podanej kwocie - ";
	}
	return 0;
}

int Account::withdraw(int money){
	if(money>=0){
		if(money<=(balance+500) ){
			balance -= money;
			return money;
		}
		else{
			cout<<"Brak œrodków na koncie - ";
		}
	}
	else{
		cout<<"B³ad w podanej kwocie - ";
	}
	return 0;
}

//int Account::withdraw(int money){
//	if(money>=0){
//		if(money<=balance ){
//			balance -= money;
//			return money;
//		}
//		else{
//			cout<<"Brak œrodków na koncie - ";
//		}
//	}
//	else{
//		cout<<"B³ad w podanej kwocie - ";
//	}
//	return 0;
//}

int main(){
	setlocale(LC_CTYPE, "polish");
    Account konto1;
	cout<<"Stan konta: "<<konto1.getBalance()<<"z³"<<endl;
	cout<<"Wp³acono: "<<konto1.deposit(10000)<<"z³"<<endl;
	cout<<"Stan konta: "<<konto1.getBalance()<<"z³"<<endl;
	cout<<"Wyp³acono kwotê: "<<konto1.withdraw(1000)<<"z³"<<endl;
	cout<<"Stan konta: "<<konto1.getBalance()<<"z³"<<endl;
	cout<<"Wyp³acono kwotê: "<<konto1.withdraw(100000)<<"z³"<<endl;
	cout<<"Wyp³acono kwotê: "<<konto1.withdraw(-1000)<<"z³"<<endl;
	cout<<"Wp³acono: "<<konto1.deposit(-10000)<<"z³"<<endl;
	cout<<"Stan konta: "<<konto1.getBalance()<<"z³"<<endl;
	cout<<"Wyp³acono kwotê: "<<konto1.withdraw(10400)<<"z³"<<endl;
	cout<<"Stan konta: "<<konto1.getBalance()<<"z³"<<endl;
	return 0;
}
