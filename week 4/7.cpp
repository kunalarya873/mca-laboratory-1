#include<iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double k = sqrt(b*b -(4*a*c));
	double root_1 = (-b-k)/(2*a);
	double root_2 = (-b+k)/(2*a);
	cout << root_1 << " " << root_2;
	return 0;
}
