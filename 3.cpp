#include <iostream>
using namespace std;


int& maxRef(int& a, int& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Initial values:" << endl;
    cout << "x = " << x << ", y = " << y << endl;


    maxRef(x, y) = 500;

    cout << "\nAfter assigning 500 to the greater value:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
