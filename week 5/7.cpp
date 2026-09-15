#include<iostream>
using namespace std;

int main(){
	int arr[6] = {1, -2, 4, 5,9, 11};
	
	int positive = 0;
	int negative = 0;
	int odd = 0;
	int even = 0;
	
	for(int i=0; i< 6; i++){
		if (arr[i]%2 == 0){
			even++;
		}
		if (arr[i]%2 == 1){
			odd++;
		}
		if (arr[i]>0){
			positive++;
		}
		if (arr[i]<0){
			negative++;
		}
	}
	cout << "Positives: " << positive << endl;
	cout << "Negatives: " << negative << endl;
	cout << "Odds: " << odd << endl;
	cout << "Evens: " << even << endl;
	
	
	return 0;
}
