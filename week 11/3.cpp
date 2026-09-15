#include <iostream>
#include<string>
using namespace std;

int reverseNum(int num){
	int res = 0;
	while (num > 0){
		res+=num%10;
		res *=10;
		num/=10;
	}
	return res/10;
		
}

int sumNumber(int num){
	int res = 0;
	while (num > 0){
		res+=num%10;
		num/=10;
	}
	return res;
}

int sumAlternative(int num){
	int res = 0;
	while (num > 0){
		res+=num%10;
		num/=10;
	}
	return res;
}

int main(){
	cout << sumNumber(12345000) << endl;
	
	return 0;
}
