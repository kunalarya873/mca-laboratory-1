#include <iostream>
using namespace std;

pair<int, int> swap_value(int num1, int num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    return make_pair(num1, num2);
}

void swap_reference(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1 = 12, num2 = 14;

    pair<int, int> result = swap_value(num1, num2);

    num1 = result.first;
    num2 = result.second;

    cout << num1 << "   " << num2 << endl;

    return 0;
}

