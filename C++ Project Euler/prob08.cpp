#include <iostream>
#include <fstream>

int main()
{
    std::ofstream filename;
    filename.open("prob08.txt");
    filename << "Hello World\n";
    filename << "line 2\n";
    filename.close();

   

}