#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    string search_keyword;
    getline(cin, search_keyword);
    
    int idx = s1.find(search_keyword);
    if (idx != -1){
		cout << idx << endl;
	}
	else{
		cout << "Does not exist" << endl;
	}
    
    return 0;
}

