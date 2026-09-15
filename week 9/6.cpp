#include <iostream>
#include <vector>
using namespace std;
int getSum(vector<int> arr, int sum, int start, int end){
	if (start == end){
	return sum;
	}
	else{
		sum+=arr[start];
		start++;
	return getSum(arr, sum , start, end);
	}
	
	
}

int main() {
	
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	int len = arr.size();
	cout << arr[0] << endl;
	int res = getSum(arr, 0, 0, len); 
	cout << res << endl;
    return 0;
}

