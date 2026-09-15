#include <iostream>
using namespace std;

int main(){
	int a=371;
	int curr=0;
	int og = a;
	
	while(a>0){
		int dig = a%10;
		curr = curr + (dig*dig*dig);
		a = a/10;
	}
	if (curr == og){
		cout << "Yes it is an Armstrong number";
	}else{
		cout << "Not an armstrong number";
	}
	return 0;
}
