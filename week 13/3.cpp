#include <iostream>
using namespace std;

class Number {
public:
    int val1;
    int val2;

    Number(int va1, int va2) {
        val1 = va1;
        val2 = va2;
    }

    friend Number operator++(Number &n1);
    friend Number operator--(Number &n1);
};

Number operator++(Number &n1) {
    n1.val1++;
    n1.val2++;
    return n1;
}

Number operator--(Number &n1) {
    n1.val1--;
    n1.val2--;
    return n1;
}

int main() {
    Number n1(5, 2);

    n1++;

    cout << n1.val1 << " " << n1.val2 << endl;

    n1--;

    cout << n1.val1 << " " << n1.val2 << endl;

    return 0;
}

