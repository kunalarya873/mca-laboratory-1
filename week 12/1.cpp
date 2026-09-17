#include<iostream>
#include<string>
using namespace std;

class Department{
	string name;
	string college;
	public:

	Department(){
		name = "Computer Science";
		college = "AMU";
	}
		void display(){
			cout << "Department name is: " << name << " College is: " <<college;
		}
};

int main(){
	Department d;
	d.display();
	
	return 0;
}
