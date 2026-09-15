#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int sum=0, mean=0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	mean = sum/n;
	cout <<"Sum: " << sum << endl;
	cout << "Mean: " << mean << endl;
	int up=0;
	for(int i =0; i< n; i++){
		up+=(arr[i]-mean)*(arr[i]-mean);
	}
	int sd = sqrt((up)/n);
	cout << "Standard Deviation: " << sd << endl;
	return 0;
	
}
