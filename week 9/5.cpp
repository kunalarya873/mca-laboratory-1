#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr) {
    if (arr.empty()) {
        return;
    }

    cout << arr[0] << endl;
    arr.erase(arr.begin());

    display(arr);
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    display(arr);

    cout << endl;

    return 0;
}

