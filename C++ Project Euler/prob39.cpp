// ongoing
#include <iostream>
#include <cmath>

int main()
{
    int solutions = 0;
    for (int a = 1; a <= 121; a++)
        for (int b = 1; b <= 121; b++)
            for (int c = 1; c <= 121; c++)
                if (pow(a,2) + pow(b,2) == pow(c,2) && a + b + c == 120){
                    std::cout << a << " " << b << " " << c << std::endl;
                    solutions++;
                }
}
