#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter length of array: " <<endl;
	cin >> n;
	char arr[n];
	char* ptr = arr;
	for(int i =0; i<n; i++){
		cin >> *(ptr+i);
	}
	cout << " ----- " << endl;
	for(int i =0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "Give me the toggle digit" << endl;
	int toggle;
	cin >> toggle;
	toggle = toggle % 26;
	for (int i =0; i<n;i++){
		int num = toggle + int(arr[i]);
		if (num > 90){
			num -= 26;
	}
		cout << char(num);
	}
	return 0;
}
