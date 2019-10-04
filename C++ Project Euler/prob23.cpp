#include <iostream>
#include <vector>

std::vector<int> factors(int);
void is_abundant(std::vector<int>, int);

int main()
{
    int num;
    long sum_nabun = 0;

    std::cout << "Enter a number : ";
    std::cin >> num;
    std::cout << std::endl;
    is_abundant(factors(num), num);

    

}

std::vector<int> factors(int numbers)
{
    std::vector<int> factors;

    for (int i = 1; i <= numbers / 2; i++){
        if (numbers % i == 0)
            factors.push_back(i);
    }

    for (int factor : factors){
        std::cout << factor << std::endl;
    }

    return factors;
}

void is_abundant(std::vector<int> numbers, int number)
{
    int sum_divisors = 0;

    for (int num : numbers){
        sum_divisors += num;
    }

    if (sum_divisors < number)
        std::cout << "Deficient" << std::endl;
    else if (sum_divisors == number)
        std::cout << "Perfect" << std::endl;
    else {
        std::cout << "Abundant" << std::endl;
    }
}