#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        std::cout << real;
        if (imag >= 0)
            std::cout << " + " << imag << "i";
        else
            std::cout << " - " << -imag << "i";
        std::cout << std::endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.0, -2.0);

    std::cout << "c1 = ";
    c1.display();

    std::cout << "c2 = ";
    c2.display();

    Complex sum = c1 + c2;
    std::cout << "Sum = ";
    sum.display();

    Complex diff = c1 - c2;
    std::cout << "Difference = ";
    diff.display();

    return 0;
}

