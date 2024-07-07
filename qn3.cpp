#include <iostream>
using namespace std;

float& refgreater(float& a, float& b) {
    return (a > b) ? a : b;
}

int main() {
    float x, y;
    cout << "Enter the values of x and y: ";
    cin >> x >> y;
    cout << "The greatest value is: " << (x > y ? x : y) << endl;
    cout << "The required greatest value is: " << (refgreater(x, y) = 500) << endl;
    cout << "New values of x and y are: x = " << x << ", y = " << y << endl;
    return 0;
}
