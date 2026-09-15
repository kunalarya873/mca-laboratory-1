#include<iostream>
#include<string>
using namespace std;
class Teacher{
	public:
		string name;
		string dept;
		int salary;
	Teacher(string name, string dept, int salary){
		this->name = name;
		this->dept = dept;
		this->salary = salary;
	}
	
	void printSalary(){
		cout << this->salary << endl;
	}
	
	void printInfo(){
		cout << this->name << " " << this->dept << " " << this->salary << endl;
	}
};

int main(){
	Teacher t1("Kunal", "Mechanical Engg", 123456);
	t1.printSalary();
	t1.printInfo();
	return 0;
}
