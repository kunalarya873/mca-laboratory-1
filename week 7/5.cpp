#include<iostream>
#include<string>
using namespace std;

class Numbers{
public:
	int a;
	int b;
	
	Numbers(int a, int b){
		this->a=a;
		this->b = b;
	}
	
	int greatest(){
		if (this->a>this->b){
		return this->a;
		}
		return this->b;
	}
	
};

int main(){
	Numbers num(1, 3);
	cout << num.greatest() << endl;
	
	return 0;
	
}
