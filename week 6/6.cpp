#include<iostream>
#include<string>
using namespace std;

int main(){
	string a = "Hello";
	string b = "World";
	string* ptr1 = &a;
	string* ptr2 = &b;
	cout << *ptr1 + *ptr2 << endl;
	return 0;
}
