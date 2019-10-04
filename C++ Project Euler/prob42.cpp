#include <iostream>

void word_score(std::string);

int main()
{
    std::string word = "SKY";
    word_score(word);
    std::cout << std::endl;
}

void word_score(std::string word)
{
    int index = 0;
    char letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int score = 0;

    for (char letter : word){
        for (char cap_letter : letters){
            if (letter == cap_letter){
                
            }
        }
    }
    std::cout << score << std::endl;
}
