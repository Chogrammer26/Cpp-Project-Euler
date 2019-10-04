#include <iostream>
//#include <vector> 

void even_fibo();

int main()
{
    even_fibo();
}

void even_fibo()
{
    int a = 1;
    int b = 2;
    //std::vector<int> even_terms = {2};
    int sum = 0;
    while (b <= 4000000) {
        /*
        a += b;
        b += a;
        if (a % 2 == 0)
            even_terms.push_back(a);
        else if (b % 2 == 0)
            even_terms.push_back(b);
        */

       if (b % 2 == 0) {
           sum += b;
       }
       int temp = b;
       b += a;
       a = temp;
    }
    
    /*
    for (int term : even_terms){
        sum += term;
    }
    */
    std::cout << sum << std::endl;
}