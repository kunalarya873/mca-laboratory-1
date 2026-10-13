#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter length of array: " <<endl;
	cin >> n;
	int arr[n];
	int* ptr = arr;
	for(int i =0; i<n; i++){
		cin >> *(ptr+i);
	}
	cout << " ----- " << endl;
	int temp = arr[0];
	arr[0] = arr[n-1];
	arr[n-1] = temp;
	int res[n];
	res[0] = arr[0];
	for(int i =1; i<n; i++){
		res[i] = res[i-1] + arr[i];
	}
	for(int i = 0; i< n; i++){
		cout << res[i] << " ";
	}
	return 0;
}
