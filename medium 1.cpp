#include <iostream>
using namespace std;
const double PI = 3.14159265359;
int main() {
    double radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    return 0;
}

