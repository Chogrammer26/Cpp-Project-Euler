#include <iostream>

int main()
{
    int factors = 0;
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++){
        if (num % i == 0)
            factors++;
    }

    std::cout << factors << std::endl;
}
