#include <iostream>
using namespace std;

int main(){
	char c;
	cin >> c;
	int input = int(c);
	
	if (input >64 && input <91){
		cout << "Capital Letter";
	}
	else if (input > 96 && input < 123){
		cout << "Small Letter";
	}
	else if (input > 47 && input < 58){
		cout << "Number";
	}else{
		cout << "Special Character";
	}
	return 0;
}
