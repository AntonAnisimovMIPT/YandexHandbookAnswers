#include <iostream>
#include <string>
#include <map>
#include <set>

int main() {
    // ввод числа n
    size_t n;
    std::cin >> n;

    // создадим контейнер
    std::map<int, std::set<std::string>> indexes;

    // две переменные ввода
    std::string wrd;
    int pg;

    for (size_t i = 0; i != n; i++)
    {
        // ввод слова и страницы
        std::cin >> wrd >> pg;

        // добавление слов к индексу строки
        indexes[pg].insert(wrd);
        
    }

    // вывод контейнера
    for (const auto& [pgs, wrds] : indexes) {
        std::cout << pgs;
        for (const auto& word : wrds) {
            std::cout << " " << word;
        }
        std::cout << "\n";
    }

}