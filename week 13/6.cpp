#include<iostream>
#include<string>
using namespace std;

class Staff{
	public:
		string name;
	
	Staff(string n){
		this->name = n;
	}
};
class Teaching : public Staff{
	public:
		string subject;
	
	Teaching(string s){
		this->subject = s;
	}
};
class NonTeaching: public Staff{
	pubic:
		string work;
	
	NonTeaching(w)
};
