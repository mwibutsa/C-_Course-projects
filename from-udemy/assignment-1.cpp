#include <iostream>
#include <string>

int main(void)
{
    std::string country;
    std::cout << "Where do you live?" << std::endl;
    std::getline(std::cin, country);

    std::cout
        << std::endl
        << "I've heard great thins about " << country
        << " . I'd like to go there sometime." << std::endl;

    return 0;
}