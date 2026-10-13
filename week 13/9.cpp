#include<iostream>
#include<vector>
using namespace std;
class Queue{
	
	vector<int> arr;

public:
	
	void enqueue(int num){
		arr.push_back(num);
	}
	void deque(){
		arr.pop_back();
	}
	int front(){
		return arr[0];
	}
	int rear(){
		return arr[arr.size()-1];
	}
	void print(){
		for(int i =0; i<arr.size();i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	bool isEmpty(){
		return arr.empty();
	}
};

int main(){
	Queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.print();
	q1.deque();
	q1.print();
	cout << q1.front() << endl;
	cout << q1.rear() << endl;
	cout << "Queue is " << ( q1.isEmpty() ? "Empty" : "not empty") << endl;
	
	return 0;
}
