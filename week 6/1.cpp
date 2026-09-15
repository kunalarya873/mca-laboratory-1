#include<iostream>
using namespace std;

int main(){
	int a =10;
	int b = 20;
	int* ptr = &a;
	int* ptr1 = &b;
	
	cout << *ptr+ *ptr1 << endl;
	return 0;
}
