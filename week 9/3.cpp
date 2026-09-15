#include<iostream>
#include<string>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void getTranspose(int arr[3][3]){
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=i; j++){
			swap(arr[i][j], arr[j][i]);
		}
		
	}
	
}
int main(){
	int arr[3][3] = {
	{ 
		1, 2, 3
	},
	{
		4, 5, 6
	},
	{
		7, 8, 9
	}
	};
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
	getTranspose(arr);
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout << arr[i][j] << endl;
		}
	}
	
	return 0;
	
} 
