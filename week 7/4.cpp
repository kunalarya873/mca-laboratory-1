#include<iostream>
#include<string>
using namespace std;

class Ptr_obj{
public:
	int roll_no;
	string name;
	
	void set_data(int roll_no, string name){
		this->roll_no = roll_no;
		this->name = name;
	}
	void print(){
		cout << "Name: " << this->name << " Roll no: " << this->roll_no << endl;
	}
	
};

int main(){
	Ptr_obj obj;
	obj.set_data(11, "Kunal");
	obj.print();
	
	return 0;
	
}
