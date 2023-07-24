#include <iostream>
#include <string>


int main() {
    //ввод строки
    std::string phrase;
    std::getline(std::cin, phrase);

    //сначала научимся выбрасывать все пробелы из строки
    std::string clear_phrase;
    for (size_t i = 0; i != phrase.size(); ++i) {
        if (phrase[i] != ' ')
        {
            clear_phrase.push_back(phrase[i]);
        }
    }
    
   
    

    //проверка симметричности
    size_t k = 0;
    for (size_t i = 0; i != (clear_phrase.size()); ++i) {
        if (clear_phrase[i] == clear_phrase[clear_phrase.size() - i -1])
        {
            ++k;
            
        }

    }
    
    if (k == clear_phrase.size())
    {
        std::cout << "YES";
    }
    else 
    {
        std::cout << "NO";
    }
    
}