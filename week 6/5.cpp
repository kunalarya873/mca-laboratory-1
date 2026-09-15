#include<iostream>
#include<string>
using namespace std;


int main(){
	string count="Kunal";
	string* ptr = &count;
	cout << *ptr << endl;
	
	return 0;
}
