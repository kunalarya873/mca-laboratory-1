#include <iostream>
#include <vector>
using namespace std;
int getMax(vector<int> arr, int max, int start, int end){
	if (start == end){
	return max;
	}
	else{
		if (max < arr[start]){
			max = arr[start];
		}
		start++;
	return getMax(arr, max , start, end);
	}
	
	
}
int getMin(vector<int> arr, int min, int start, int end){
	if (start == end){
	return min;
	}
	else{
		if (min > arr[start]){
			min = arr[start];
		}
		start++;
	return getMin(arr, min , start, end);
	}
	
	
}
int main() {
	
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	int len = arr.size();
	int res = getMin(arr, arr[0], 0, len); 
	cout << res << endl;
    return 0;
}
