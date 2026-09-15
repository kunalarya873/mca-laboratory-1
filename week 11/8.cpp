#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> num, int target){
	int left= 0, right= num.size()-1;
	while (left <= right){
		int mid= (left + right)/2;
		if (num[mid] == target){
			return mid;
		}else if (num[mid]< target){
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	return -1;
}

int main(){
	vector<int> nums ;
	nums.push_back(10);
	nums.push_back(11);
	nums.push_back(12);
	nums.push_back(13);
	nums.push_back(14);
	cout << search(nums, 13) << endl;
	
	return 0;
}
