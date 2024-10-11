#include <iostream>
#include <iomanip>

int main(void)
{

    float number1{1.12345678901234567890f}; // Precision 7
    double number2{1.12345678901234567890}; // Precision: 15
    long double number3{1.12345678901234567890L};

    double number4{192400023.0L};

    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    // Precision

    std::cout << std::setprecision(20); // control the precision from std::cout.
    std::cout << "Number1 is : " << number1 << std::endl
              << "Number2 is : " << number2 << std::endl
              << "Number3 is : " << number3 << std::endl;

    std::cout << "Number4: " << number4 << std::endl;

    return 0;
}