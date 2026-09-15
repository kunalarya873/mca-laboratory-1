#include<iostream>
using namespace std;

int conversion(int num, int base){
	int res =0;
	int place = 1;
	while(num>0){
		int rem = num %base;
		res = res+ rem*place;
		num = num/base;
		place = place*10;
		
	}
	return res;
}

int main(){
	int num, base;
	cout << "Enter the number for conversion "<< endl;
	cin >> num;
	cout << "Enter the base of the number "<< endl;
	cin >> base;
	int res = conversion(num, base);
	cout << "Conversion of num is " << res << endl;
	return 0;
}
