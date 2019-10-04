//ongoing 
#include <iostream>
#include <vector>
#include <cmath>
#include <set>

int main()
{
    unsigned long int terms;
    std::set<int> numbers;

    for (int i = 2; i <= 100; i++){
        for (int j = 2; j <= 100; j++){
            numbers.insert(pow(i,j));
        }
    }
    terms = numbers.size();
    std::cout << terms << std::endl;
}
