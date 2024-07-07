#include<iostream>
using namespace std;

namespace doctor {
    double salary;
    double newsalary() {
        return salary * 1.1;
    }

    namespace engineer {
        double salary;
        double newsalary() {
            return salary * 1.5;
        }
    }
}

int main() {
    char ch;
    do {
        cout << "Press D if you are a doctor and press E if you are an engineer: ";
        cin >> ch;
    } while (ch != 'E' && ch != 'D');

    cout << "Enter your salary: ";
    if (ch == 'E') {
        cin >> doctor::engineer::salary;
    } else if (ch == 'D') {
        cin >> doctor::salary;

    cout << "Your new salary: ";
    if (ch == 'E') {
        cout << doctor::engineer::newsalary();
    } else if (ch == 'D') {
        cout << doctor::newsalary();
    }

    return 0;

}
}
