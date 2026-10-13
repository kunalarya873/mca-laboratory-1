#include<iostream>
#include<vector>
using namespace std;

class Stack{
	vector<int> arr;
	
public:
	
	void push(int num){
		arr.push_back(num);
	}
	void pop(){
		arr.erase(arr.begin()+ arr.size()-1);
	}
	void print(){
		for(int i =arr.size()-1; i>-1; i--){
			cout << arr[i] << endl;
		}
	}
	int peek(){
		return arr[arr.size()-1];
	}
	bool isEmpty(){
		return arr.empty();
	}
};
int main(){
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.print();
	cout << endl;
	s1.push(3);
	s1.push(4);
	s1.print();
	cout << endl;
	s1.pop();
	s1.print();
	cout << endl;
	cout <<"Peek is: " << s1.peek() << endl;
	bool empty = s1.isEmpty() ;
	cout <<"Stack is " << (empty ? "Empty" : "Not Empty" )<< endl;
	return 0;
}
