#include<iostream>
using namespace std;


int main(){
	int n;
	cin >> n;
	int arr[n];
	int* ptr = arr;
	
	for(int i = 0; i<n; i++){
		cin >> *(ptr+i);
	}
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
