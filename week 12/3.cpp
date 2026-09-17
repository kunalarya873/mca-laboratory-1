#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
int height;
int base;

public:
	Triangle(int h, int b){
		this->height = h;
		this->base = b;
	}
	
	void area(){
		cout <<"Area is: "<< 0.5 * this->height * this->base << endl;
	}
	void hypo(){
		cout <<"Hypo is: "<< sqrt(pow(this->base, 2) + pow(this->height, 2)) << endl;
	}


};


int main(){
	Triangle t(12, 13);
	t.area();
	t.hypo();
	
	return 0;
}
