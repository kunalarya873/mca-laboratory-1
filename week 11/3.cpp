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

int altdigits(int num, bool even) {
    int res = 0;
    int position = 1;

    while (num > 0) {
        int digit = num % 10;

        if ((position % 2 == 0) == even) {
            res += digit;
        }

        num /= 10;
        position++;
    }

    return res;
}


int main(){
	cout << altdigits(12345, true) << endl;
	
	return 0;
}
