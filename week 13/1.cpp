#include<iostream>
using namespace std;

class Number{
	
	public:
	int val1;
	int val2;
	
		Number(int val1, int val2){
			this->val1 = val1;
			this->val2 = val2; 
		}
		Number operator+(Number n){
			return Number(this->val1 + n.val1, this->val2 + n.val2);
		}
		Number operator-(Number n){
			return Number(this->val1 - n.val1, this->val2 - n.val2);
		}
		Number operator*(Number n){
			return Number(this->val1 *  n.val1, this->val2 * n.val2);
		}
		Number operator/(Number n){
			return Number(this->val1 /  n.val1, this->val2 / n.val2);
		}
		
};
int main(){
	Number n1(5, 2);
	Number n2(333, 44);
	Number add = n1 + n2;
	Number multiply = n1*n2;
	cout << multiply.val1 << " " << add.val2;
	return 0;
	}
