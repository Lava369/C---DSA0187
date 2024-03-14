#include <iostream>
using namespace std;
const double PI = 3.14159265359;

int main() {
    double radius, volume;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    cout << "The volume of the sphere with radius " << radius << " is: " << volume << endl;
    return 0;
}

