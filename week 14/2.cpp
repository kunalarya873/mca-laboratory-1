#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle is initialised" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Square is initialised" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Triangle is initialised" << endl;
    }
};

int main() {
    Circle c;
    Square sq;
    Triangle t;

    Shape* s[3] = {&c, &sq, &t};

    for (int i = 0; i < 3; i++) {
        s[i]->draw();
    }

    return 0;
}