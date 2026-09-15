#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[5] = { 1, 3, 5, 2, 5};
	sort(arr, arr+5);
	cout << arr[2] << endl;	
}
