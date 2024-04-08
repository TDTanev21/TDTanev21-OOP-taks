#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    float mark1;
    float mark2;

public:

    Student() {
        name = "";
        mark1 = 0.0;
        mark2 = 0.0;
    }

    Student(string n, float m1, float m2) {
        name = n;
        mark1 = m1;
        mark2 = m2;
    }

    float GetMarks(int marknumber) {
        if (marknumber == 1)
            return mark1;
        else
            return mark2;
    }


    float calc_total() {
        return mark1 + mark2;
    }
};

int main() {

    string name = "Jack";
    float mark1 = 60;
    float mark2 = 70;

    Student student(name, mark1, mark2);

    cout << "GetMarks(1)  => " << student.GetMarks(1) << endl;
    cout << "GetMarks(2)  => " << student.GetMarks(2) << endl;
    cout << "calc_total() => " << student.calc_total() << endl;

    return 0;
}
