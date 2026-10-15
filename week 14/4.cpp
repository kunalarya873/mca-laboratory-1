#include <iostream>
using namespace std;

class Numbers {
    int a[100], n;

public:
    void input() {
        cout << "Enter number of values: ";
        cin >> n;

        cout << "Enter numbers: ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    friend double mean(Numbers);
};

double mean(Numbers obj) {
    double sum = 0;

    for (int i = 0; i < obj.n; i++)
        sum += obj.a[i];

    return sum / obj.n;
}

int main() {
    Numbers obj;
    obj.input();

    cout << "Mean = " << mean(obj) << endl;

    return 0;
}
