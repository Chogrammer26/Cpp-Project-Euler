#include <iostream>

typedef unsigned long int ulint;
ulint collatz_sequence(ulint);

int main()
{
    ulint number = 0;
    ulint num_terms = 0;
    for (int i = 500000; i <= 999999; i++){
        if (collatz_sequence(i) > num_terms){
            num_terms = collatz_sequence(i);
            number = i;
        }
    }
    std::cout << num_terms << std::endl;
    std::cout << number << std::endl;
}

ulint collatz_sequence(ulint num)
{
    ulint count = 1;
    while(num != 1)
    {
        if (num % 2 == 0){
            count++;
            num /= 2;
        } 
        else if (num % 2 == 1){
            count++;
            num = 3 * num + 1;
        }
    }
    return count; 
}
