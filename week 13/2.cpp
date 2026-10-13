#include<iostream>
using namespace std;

class Number{
	
	public:
	int val1;
	int val2;
	
		Number(int va1, int va2){
			val1 = va1;
			val2 = va2; 
		}
		friend Number operator+(Number n1, Number n2);
		friend Number operator-(Number n1, Number n2);
		friend Number operator*(Number n1, Number n2);
		friend Number operator/(Number n1, Number n2);
		
};
Number operator+(Number n1, Number n2){
			return Number(n2.val1 + n1.val1, n2.val2 + n1.val2);
		}
Number operator-(Number n1, Number n2){
			return Number(n2.val1 - n1.val1, n2.val2 - n1.val2);
		}
Number operator*(Number n1, Number n2){
			return Number(n2.val1 * n1.val1, n2.val2 * n1.val2);
		}
Number operator/(Number n1, Number n2){
			return Number(n2.val1 / n1.val1, n2.val2 / n1.val2);
		}

int main(){
	Number n1(5, 2);
	Number n2(333, 44);
	Number add = n1 + n2;
	Number multiply = n1 * n2;
	cout << multiply.val1 << " " << add.val2;
	return 0;
	}
