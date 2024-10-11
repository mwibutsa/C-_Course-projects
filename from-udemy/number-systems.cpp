#include <iostream>

int main()
{

    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal system
    int number3 = 0x0f;       // Hexadecimal
    int number4 = 0b00001111; // Binary

    std::cout << "Number1 : " << number1 << std::endl;
    std::cout << "Number2 : " << number2 << std::endl;
    std::cout << "Number3 : " << number3 << std::endl;
    std::cout << "Number4 : " << number4 << std::endl;
    std::cout << "Sum of number3 and number4 is : " << number3 + number4 << std::endl;
    return 0;
}