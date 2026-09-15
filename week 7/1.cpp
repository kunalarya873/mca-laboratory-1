#include<iostream>

using namespace std;
int main(){
	char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	char inp[5];
	char* ptr=inp;
//	cin>> inp;
	
	for(int i = 0; i<5; i++){
		cin >> *(ptr+i);
	}
	int count =0;
	for(int i = 0; i<5; i++){
		for(int j=0; j<10;j++){
			if (arr[j] == inp[i]){
				count++;
			}
		}
	}
	cout << count << endl;
	
	return 0;
	
}
