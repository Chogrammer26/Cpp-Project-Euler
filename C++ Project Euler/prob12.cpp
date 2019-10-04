#include <iostream>

int factors(int);

int main()
{
    typedef unsigned long long ulint;
    ulint num_factors = 0;
    ulint tri_term = 0;
    for (int i = 1; i < 10000000000000; i++){
        tri_term += i;
        std::cout << tri_term << " " <<  factors(tri_term) << " " 
                  << i << std::endl;

        if (factors(tri_term) > 500){
            break;
        }
    }
}

int factors(int num)
{
    int num_factors = 1;
    for (int i = 1; i <= num / 2 ; i++){
        if (num % i == 0){
            num_factors++;
        }
    }
    return num_factors;
}
