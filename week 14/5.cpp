#include <iostream>
using namespace std;

class friend_func1;
class friend_func2;

class Numbers {
    int a, b, c, d, e;

public:
    void input() {
        cout << "Enter five numbers: ";
        cin >> a >> b >> c >> d >> e;
    }

    friend double friend_func1(Numbers);
    friend double friend_func2(Numbers);
};

double friend_func1(Numbers n) {
    return n.a + n.b;
}

double friend_func2(Numbers n) {
    return n.c + n.d + n.e;
}

int main() {
    Numbers n;
    n.input();

    double sum = friend_func1(n) + friend_func2(n);

    cout << "Average = " << sum / 5.0 << endl;

    return 0;
}
