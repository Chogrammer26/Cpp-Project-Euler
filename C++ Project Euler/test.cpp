#include <iostream>

void digit_mul(int);

int main()
{
    int num;
    double result = 1;

    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;
    
    for (int i = 1000; i >= 1; i /= 10){
        result *= (num / i);
        num -= i * (num / i);
    }
    
   std::cout << result << std::endl;
}


// void digit_mul(int number)
// {
//     double result = 1;
//     for (int i = 1000; i <= 1; i / 10){
//         result = result * (number / i);
//         std::cout << result << std::endl;
//         number -= (number / i) * i;
//         std::cout << number << std::endl;
//     }

//     std::cout << result;
// }

// std::to_string(int) converts an integer to string
