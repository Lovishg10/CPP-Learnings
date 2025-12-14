#include <iostream>
#include <iomanip>
#include <physics.h>
#include <constants.h>

int main()
{
    double height{};

    std::cout << "Enter your height(metres): ";

    std::cin >> height;

    std::cout << std::setprecision(3) << "Time Taken is: " << calculateFallTime(height) << '\n';

    return 0;
}