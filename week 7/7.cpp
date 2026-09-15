#include<iostream>
#include<string>
using namespace std;

class Flight{
public:
	int flight_num;
	string source;
	string des;
	int fare;
	
	Flight(int flight_num, string source, string des, int fare){
		this->flight_num= flight_num;
		this->source=source;
		this->des = des;
		this->fare = fare;
	}
	
	void getInfo(){
		cout << this->flight_num << " " << this->source << " " << this->des << " " << this->fare << endl; 
	}
	
	Flight* getThis(){
		return this;
	}
	
	
};

int main(){
	Flight flight(102, "DXB", "DEL", 255000);
	cout << flight.getThis() << endl;
	
	return 0;
	
}
