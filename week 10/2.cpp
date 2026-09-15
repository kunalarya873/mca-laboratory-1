#include <iostream>
using namespace std;

struct Employee{
	string name;
	int basic_pay;
};

int main() {
	Employee e_[3];
	for(int i = 0; i<3 ; i++){
		
		cout << "Enter Name: " << endl;
		cin >> e_[i].name;
		cout << "Enter basic pay" << endl;
		cin >> e_[i].basic_pay;
	}
    
    cout << "Enter the DA in %age: " << endl;
    
    for(int i=0; i<3; i++){
    	cout << e_[i].name << endl;
    	cout << e_[i].basic_pay*1.52 << endl;
	}

    return 0;
}

