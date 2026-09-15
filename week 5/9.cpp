#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the length of the array: ";
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "Now give the number that you want frequency of: ";
	int search, count=0;
	cin >> search;
	
	for(int i = 0; i<n; i++){
		if (arr[i] == search){
			count++;
		}
	}
	cout << "Count of the " << search << " in the array is " << count << endl;
	
	return 0;
}
