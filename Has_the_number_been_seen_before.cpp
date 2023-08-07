#include <iostream>
#include <string>
#include <vector>
#include <set>

// позаимствовали функцию сплит из прошлых задач, но модернизировали для добавления intов, а не строк
std::vector<int> int_Split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    size_t i = 0;
    size_t end = str.size();
    if (str.substr(str.size() - 1) == " ")
    {
        --end;
    }
    for (size_t j = 0; j != end; ++j) {
        if (str[j] == delimiter) {
            result.push_back(str.substr(i, j - i));
            i = j + 1;
        }
        
        
    }
    result.push_back(str.substr(i));

    // из string в int
    std::vector<int> int_result(0);
    for (size_t k = 0; k != result.size(); ++k)
    {
        int_result.push_back(std::stoi(result[k]));
    }

    return int_result;
    
}


int main() {

    std::string line;
    std::getline(std::cin, line);

    std::vector<int> values = int_Split(line, ' ');

    // создадим контейнер, чтобы потом вставлять элементы и проверять наличие
    std::set<int> if_numbers_repeat;
    for (size_t t = 0; t != values.size(); ++t)
    {
        if (if_numbers_repeat.find(values[t]) == if_numbers_repeat.end()) // если число попалось впервые
        {
            if_numbers_repeat.insert(values[t]); // добавление в контейнер
            std::cout << "NO" << "\n"; 
            
        }
        else // если число уже есть в контейнере
        {
            std::cout << "YES" << "\n";
        }
        
    }

}
