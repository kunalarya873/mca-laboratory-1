#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }
    operator int() {
        return value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    int x = 10;

    Number n = x;   // int ? Number

    n.display();
    int y = n;   // Number ? int

    cout << "y = " << y << endl;

    return 0;
}

