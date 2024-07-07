#include <iostream>
using namespace std;
class Shape {
public:
    void rect(float l, float b) {
        cout << "Area of rectangle: " << l * b << endl;
    }
    void circle(double r) {
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }
    void square(double l) {
        cout << "Area of square: " << l * l << endl;
    }
};
int main() {
    Shape s1;
    s1.rect(5, 6);
    s1.circle(7);
    s1.square(8);

    return 0;
}
