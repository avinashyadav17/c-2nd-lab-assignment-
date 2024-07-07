#include <iostream>
using namespace std;

class Vehicle {
public:
    char modelName[20];
    char modelNum[20];
    double cost;
};
int main() {
    Vehicle v1, v2;

    cout<<"Enter the model number, model name, and the cost of the first vehicle: ";
    cin>>v1.modelNum>>v1.modelName>>v1.cost;

    cout<<"Enter the model number, model name, and the cost of the second vehicle: ";
    cin>>v2.modelNum>>v2.modelName>>v2.cost;

    cout<<"Details of the first vehicle: "<<endl;
    cout<<"Model Number: "<<v1.modelNum<<endl;
    cout<<"Model Name: "<<v1.modelName<<endl;
    cout<<"Cost:"<<v1.cost<< endl;

    cout << "Details of the second vehicle: " << endl;
    cout << "Model Number: " << v2.modelNum << endl;
    cout << "Model Name: " << v2.modelName << endl;
    cout << "Cost:" << v2.cost << endl;

    return 0;
}
