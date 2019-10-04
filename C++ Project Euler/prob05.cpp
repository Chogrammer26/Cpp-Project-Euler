#include <iostream>

int multiply(std::string);

int main()
{
    std::string number("124143239302");
    
    std::cout << 4575 / 1000 << std::endl;
    // std::cout << multiply(number) << std::endl;
    // for (int i = 0; i <= number.length() - 1; i+=4){
    //     std::cout << std::stoi(number.substr(i,4))
    //               << std::endl;
    // }
}

// int multiply(std::string number)
// {
//     int result = 1; 
//     for (char digit : number){
//         result *= std::stoi(digit);
//     }

//     return result;
// }
    
// str.substr(pos, length) 
// std::stoi(str) - converts the enclosed string to a int
