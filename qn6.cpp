#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    double toMeters() const {
        int totalInches = (feet * 12) + inches;
        double meters = totalInches * 0.0254;
        return meters;
    }
    void displayInMeters() const {
        cout << "Distance in meters: " << toMeters() << " meters" << endl;
    }
};

int main() {
    Distance d1;
    d1.input();
    d1.displayInMeters();

    Distance d2(5, 8);
    d2.displayInMeters();

    return 0;
}
