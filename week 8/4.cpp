#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    string search_keyword;
    getline(cin, search_keyword);

    int occurrences = 0;

    if (search_keyword.empty()) {
        cout << 0 << endl;
        return 0;
    }

    char* str_ptr = &s1[0];

    while (*str_ptr != '\0') {
        char* temp_str = str_ptr;
        char* search_ptr = &search_keyword[0];

        while (*search_ptr != '\0' && *temp_str == *search_ptr) {
            temp_str++;
            search_ptr++;
        }

        if (*search_ptr == '\0') {
            occurrences++;
        }

        str_ptr++;
    }

    cout << occurrences << endl;

    return 0;
}

