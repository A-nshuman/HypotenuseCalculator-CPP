#include <iostream>
#include <cmath>

int main()
{
    double base;
    double height;
    double hypo;

    std::cout << "Enter base : ";
    std::cin >> base;

    std::cout << "Enter height : ";
    std::cin >> height;

    hypo = sqrt(pow(base, 2) + pow(height, 2));

    std::cout << "Hypotenuse of triangle is " << hypo;
}
