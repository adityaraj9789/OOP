#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;
    string email;
    int phone_number;

    Student(string name_, int age_, string course_, string email_, int phone_number_) {
        name = name_;
        age = age_;
        course = course_;
        email = email_;
        phone_number = phone_number_;
    }

    void updateProfile(string name_, int age_, string course_, string email_, int phone_number_) {
        name = name_;
        age = age_;
        course = course_;
        email = email_;
        phone_number = phone_number_;
    }

    void display() {
        cout << "Name         : " << name << endl;
        cout << "Age          : " << age << endl;
        cout << "Course       : " << course << endl;
        cout << "Email        : " << email << endl;
        cout << "Phone Number : " << phone_number << endl;
        cout << "-------------------------\n";
    }
};

int main() {
    Student student1("Adityaraj Mhaske", 19, "Computer Science", "adityaraj@example.com", 677467467 );

    cout << "Initial Profile:\n";
    student1.display();

    student1.updateProfile("Adityaraj Mhaske", 20, "Data Science", "adi@example.com", 924416022);

    cout << "Updated Profile:\n";
    student1.display();

    return 0;
}