#include<iostream>
using namespace std;
int main(){
	int arr[6] = {1, 4, 7, 9, 10, 11};
	int arr2[5] = { 3, 6, 8, 10, 19};
	int res[11];
	int i=0, j=0, k=0;
	while(i<6 and j<5){
		if(arr[i]<=arr2[j]){
			res[k] = arr[i];
			i++;
		}else{
			res[k] = arr2[j];
			j++;
		}
		k++;
	}
	for(int l=0; l<11; l++){
		cout << res[l]<<endl;
	}
	return 0;
}
