#include<iostream>
using namespace std;

int gcd(int num1, int num2){
	int res = 0;
	while(num2!=0){
		int temp = num2;
		num2 = num1%num2;
		num1 = temp;
	}
	return num1;
}

int main(){
	
	int h = gcd(12, 16);
	cout << h << endl;
	
	return 0;
	
} 
