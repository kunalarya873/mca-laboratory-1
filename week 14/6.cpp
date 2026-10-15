#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    friend void display(Student);
};

void display(Student s) {
    cout << "\nStudent Information\n";
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s;
    s.input();
    display(s);

    return 0;
}
