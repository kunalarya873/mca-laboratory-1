#include <iostream>
using namespace std;

class Base {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    virtual ~Base() = default;
};

class Derived : public Base{
    public:
    void draw() override{
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.draw();
    return 0;
}