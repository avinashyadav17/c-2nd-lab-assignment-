#include <iostream>
using namespace std;

namespace doctors {
    float salary = 5000;

    void increaseSalary() {
        salary += (salary * 0.10);
    }
}

namespace engineers {
    float salary = 6000;

    void increaseSalary() {
        salary += (salary * 0.15);
    }
}

int main() {

    cout << "Initial salaries:" << endl;
    cout << "Doctor's salary: " << doctors::salary << endl;
    cout << "Engineer's salary: " << engineers::salary << endl;


    doctors::increaseSalary();
    engineers::increaseSalary();


    cout << "\nAfter salary increase:" << endl;
    cout << "Doctor's salary:" << doctors::salary << endl;
    cout << "Engineer's salary:" << engineers::salary << endl;


    cout << "\nAccessing doctor's salary through engineers namespace:" << endl;
    cout << "Doctor's salary:" << doctors::salary << endl;

    return 0;
}
