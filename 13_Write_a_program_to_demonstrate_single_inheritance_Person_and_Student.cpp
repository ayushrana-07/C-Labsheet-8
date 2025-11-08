#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void inputPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Student : public Person {
public:
    float marks;
    void inputStudent() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void show() {
        cout << "Name: " << name << "\nAge: " << age << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.inputPerson();
    s.inputStudent();
    s.show();
    return 0;
}
