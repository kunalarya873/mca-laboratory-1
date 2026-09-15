#include <iostream>

using namespace std;

int main(){
	int num;
	cin >> num;
	bool is_res = false;
	is_res = (num %2 == 0) ? true: false;
	if (is_res == true){
	cout << "Number: " << num << " is Even";
	}
	else{
		cout << "Number: " << num << " is Odd";
	}
	return 0;
	
}
