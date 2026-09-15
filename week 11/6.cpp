#include<iostream>
using namespace std;

class BankAccount{
	string depositor_name;
	string account_number;
	string type;
	int balance;
public:	
	void initialise(string depositor_name, string acc_no, string type, int bal){
		this->depositor_name = depositor_name;
		this->account_number = acc_no;
		this->type = type;
		this->balance = bal;
		
	}
	void deposit(int amount){
		this->balance += amount;
			cout << "Your current balance is: " << this->balance <<endl;
	}
	void withdraw(int amount){
		this->balance -= amount;
		cout << "You have deposited: " << amount << endl;
			cout << "Your current balance is: " << this->balance <<endl;
	}
	void checkBalance(){
		cout << "Your current balance is: " << this->balance <<endl;
	}
};
int main(){
	BankAccount b;
	b.checkBalance();
	b.initialise("Kunal", "111", "Savings", 1000);
	b.checkBalance();
	b.deposit(1000);
	b.withdraw(13);
//	b.checkBalance();
	
	return 0;
}
