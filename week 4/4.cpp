#include <iostream>
#include <list>
using namespace std;

int main() {
    int a;
    cin >> a;

    list<int> res;

    int x = 0;
    int y = 1;

    for (int i = 0; i < a; i++) {
        res.push_back(x);

        int temp = x + y;
        x = y;
        y = temp;
    }

    for (list<int>::iterator it = res.begin(); it != res.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
