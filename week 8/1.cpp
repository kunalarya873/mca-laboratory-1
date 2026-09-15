#include<iostream>
using namespace std;

int main(){
	string s1 = "Kunal Arya";
	s1.insert(0, "The ");
	cout << s1 << endl;
	s1.erase(0, 4);
	cout << s1 << endl;
	return 0;
}
