#include <iostream>
using namespace std;

struct ComplexNumber{

	float real;
	float imaginary;
	
	void getData(float real, float imaginary){
		this->real = real;
		this->imaginary = imaginary;
	};
	void display(){
		cout << this->real << " + " << this->imaginary << "i" << endl;
	};
	void addition(ComplexNumber c1, ComplexNumber c2){
		cout << c1.real+c2.real << " + " << c2.imaginary+c1.imaginary << "i" << endl;
	};
	void subtraction(ComplexNumber c1, ComplexNumber c2){
		cout << c1.real-c2.real << " + " << c2.imaginary-c1.imaginary << "i" << endl;
	};
	void multiplaction(ComplexNumber c1, ComplexNumber c2){
		cout << c1.real*c2.real - c1.imaginary*c2.imaginary << " + " << c2.imaginary*c1.real - c2.real*c1.imaginary << "i" << endl;
	};
};
void addition(ComplexNumber c1, ComplexNumber c2){
		cout << c1.real+c2.real << " + " << c2.imaginary+c1.imaginary << "i" << endl;
	};
	void subtraction(ComplexNumber c1, ComplexNumber c2){
		cout << c1.real-c2.real << " + " << c2.imaginary-c1.imaginary << "i" << endl;
	};
	void multiplaction(ComplexNumber c1, ComplexNumber c2){
		cout << c1.real*c2.real - c1.imaginary*c2.imaginary << " + " << c2.imaginary*c1.real - c2.real*c1.imaginary << "i" << endl;
	};


int main() {
	ComplexNumber c1, c2;
	c1.getData(1,2);
	c2.getData(3, 4);
	addition(c1, c2);
	c1.display();
    return 0;
}
