#include <iostream>
#include <cstring>
using namespace std;

union Student {
    char name[6];
    char home_address[50];
    char hostel_address[60];
    char city[44];
    char state[22];
    char zip[22];
};

int main() {
    Student s1;

    strcpy(s1.name, "Kunal");

    cout << s1.name << endl;

    return 0;
}

