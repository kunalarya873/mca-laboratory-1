#include <iostream>
#include<string>
using namespace std;

int addition(int num1, int num2){
	return num1+num2;
}
int subtraction(int num1, int num2){
	return num1-num2;
}
int multiplication(int num1, int num2){
	return num1*num2;
}
int division(int num1, int num2){
	return num1/num2;
}
int main(){
	int n1, n2, op;
	cout << "What is the first number" << endl;
	cin >> n1;
	cout << "What is the second number" << endl;
	cin >> n2;
	cout << "What operations do you want to perform??? \n Choose wisely: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division"<< endl;
	cin >> op;
	switch(op){
		case 1:
			cout << addition(n1, n2) << endl;
			break;
			case 2:
			cout << subtraction(n1, n2) << endl;
			break;
			case 3:
			cout << multiplication(n1, n2) << endl;
			break;
		default:
			cout << division << endl;
	}
	return 0;
		

}
