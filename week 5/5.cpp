#include <iostream>
using namespace std;

void swap(int a, int b){
	int temp = a;
	a= b;
	b= temp;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i< n/2; i++){
		int temp = arr[i];
		arr[i]= arr[n-i-1];
		arr[n-i-1]= temp;
	}
	for(int i = 0; i< n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
