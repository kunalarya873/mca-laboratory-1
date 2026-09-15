#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n], arr2[n];
	cout << "Give first array: " << endl;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Give second array: " << endl;
	for(int i = 0; i<n; i++){
		cin >> arr2[i];
	}
	int sum[n], product[n];
	
	for(int i = 0; i< n; i++){
		sum[i] = arr[i] + arr2[i];
		product[i] = arr[i] * arr2[i];
	}
	
	for(int i = 0; i< n; i++){
		cout << sum[i] << " ";
	}
	cout << "--------" << endl;
	
	for(int i = 0; i< n; i++){
		cout << product[i] << " ";
	}
	return 0;
}
