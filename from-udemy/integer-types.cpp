#include <iostream>

int main()
{
    int elephant_count{0};
    int lion_count{0};
    int dog_count{10};
    int cat_count{15};
    int domesticated_animals{dog_count + cat_count};

    std::cout << elephant_count << lion_count << dog_count << cat_count << domesticated_animals << std::endl;

    std::cout << "Cat count: " << sizeof(cat_count) << std::endl;
    std::cout << "Domesticated animals: " << sizeof(domesticated_animals) << std::endl;
    return 0;
}