#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int len = 0;
	for(int i = 0; i< n; i++){
		len++;
	}
	cout << len << endl;
	return 0;
}
