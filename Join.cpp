#include <iostream>
#include <vector>
#include <string>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    std:: string itog;
    //если вектор пустой, то функция вернет пустую строку
    if (tokens.empty())
    {
        itog = "";
    }

    //если в векторе ровно один элемент, то он и вернется
    else if (tokens.size() == 1)
    {
        itog.insert(0, tokens[0]);
    }
    
    //общий случай
    else {
    for (size_t i = 0; i != tokens.size() - 1; ++i)
    {
        itog.insert(itog.size(), tokens[i]);
        itog.push_back(delimiter);
    }

    itog.insert(itog.size() , tokens[tokens.size() -1]);
    }

    
    return itog;

}
