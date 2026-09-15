#include<iostream>

using namespace std;
int main(){
	char str[] = "Kunal Arya";
	char* ptr = str;
	int length = 0;
	while(*ptr!='\0'){
		ptr++;
		length++;
	}
	cout << length << endl;
	
	return 0;
	
}
