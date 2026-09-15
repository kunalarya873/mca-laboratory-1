#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(string str){
	int start = 0;
	int end = str.length()-1;
	while (start <= end){
		if (str[start] != str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}

int main(){
	string s1 = "racecar";
	bool isPal = isPalindrome(s1);
	cout << isPal << endl;
	return 0;
}
