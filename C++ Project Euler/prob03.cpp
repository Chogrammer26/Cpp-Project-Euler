#include <iostream>
#include <vector>

int main()
{
    long long int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    for (long long int i = 2; i <= num; i++){
        if (num % i == 0){
            std::cout << i << std::endl;
        }
    }
}