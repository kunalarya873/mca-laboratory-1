#include <iostream>
using namespace std;

class Person {
    int age;

public:
    Person(int a) {
        age = a;
    }

    Person* elder(Person &p) {
        if (this->age > p.age)
            return this;
        else
            return &p;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1(25), p2(30);

    Person *elderPerson = p1.elder(p2);

    cout << "Elder person: ";
    elderPerson->display();

    return 0;
}
