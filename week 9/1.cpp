#include<iostream>
#include<string>
using namespace std;

int factorial_recursive(int num){
	if (num == 1){
		return 1;
	}else{
		return num*factorial_recursive(num-1);
	}
}

int fac_non_recursive(int num){
	int res = 1;
	
	for(int i=1; i<=num; i++){
		res *= i;
	}
	return res;
}

int gcd_non_recursive(int num1, int num2){
	int res = 0;
	while(num2!=0){
		int temp = num2;
		num2 = num1%num2;
		num1 = temp;
	}
	return num1;
}
int gcd_recursive(int num1, int num2){
	if (num2 == 0){
		return num1;
	};
	return gcd_recursive(num2, num1%num2);
}


int main(){
	
	int fac = gcd_recursive(12, 16);
	cout << fac << endl;
	
	return 0;
	
} 
