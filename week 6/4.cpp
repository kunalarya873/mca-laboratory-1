#include<iostream>
using namespace std;

int main(){
	int a = 10, b = 20;
	int* ptr = &a;
	int* ptr2 = &b;
	cout << "a: "<< a << " b: " << b << endl;
	cout << "a: "<< (*ptr) + 1 << " b: " << (*ptr2) + 1 << endl;
	return 0;
}
