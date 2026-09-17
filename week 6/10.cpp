#include<iostream>
#include<cstring>
using namespace std;


int main(){
	char str[100];
	char *ptr;
	cin >> str;
	cout << str << endl;
	ptr = str+strlen(str)-1;
	while (ptr>=str){
		cout << *ptr;
		ptr--;
	}
	
	return 0;
}
