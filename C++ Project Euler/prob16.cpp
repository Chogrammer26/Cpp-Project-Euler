#include <iostream>
#include <cmath>

int main()
{
     

    int number = pow(2,10);

    std::cout << pow(2,1000) << std::endl;

    for (char n : std::to_string(number)){
        std::cout << n << std::endl;
    }
}