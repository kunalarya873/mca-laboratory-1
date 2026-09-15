#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr){
	int len = arr.size();
	for(int i = 0;  i<len; i++){
		for(int j = 0; j<len;j++){
			if (arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	vector<int> nums ;
	nums.push_back(11);
	nums.push_back(10);
	nums.push_back(14);
	nums.push_back(13);
	nums.push_back(12);
	bubbleSort(nums) ;
	int n = nums.size();
	for(int i =0; i<n; i++){
	cout << nums[i] << endl;
	}
	
	return 0;
}
