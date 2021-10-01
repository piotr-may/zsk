#include<iostream>

using namespace std;

class School {
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surename;
};



string School::s_school = "ZSK";
string School::s_jobPosition="student";

int main(){
	setlocale(LC_CTYPE,"polish");
	
	cout<<School::s_school<<endl
		<<School::s_jobPosition;
	
	
	return 0;
}
