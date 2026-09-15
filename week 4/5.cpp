#include<iostream>
#include <cmath>
using namespace std;

int main(){
	int num = 100;
	
	for(int i = 2; i<=num; i++){
		bool is_prime = true;
		for(int j = 2; j *j <=i; j++){
			if(i%j ==0){
			is_prime = false;
			break;
		}
		
		}
		if (is_prime){
			cout << i << endl;
		}
		}	
	return 0;
}
