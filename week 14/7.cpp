#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;

    ofstream fout("data.txt");

    cout << "Enter text: ";
    getline(cin, text);

    fout << text;
    fout.close();

    ifstream fin("data.txt");

    fin.seekg(0, ios::end);
    int size = fin.tellg();

    cout << "\nText in reverse order:\n";

    for (int i = size - 1; i >= 0; i--) {
        fin.seekg(i, ios::beg);
        char ch;
        fin.get(ch);
        cout << ch;
    }

    fin.close();

    return 0;
}