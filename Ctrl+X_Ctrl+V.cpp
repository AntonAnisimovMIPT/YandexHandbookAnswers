#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <list> // т.к в данном контейнере удобно оброщаться к середине

void TextRedactor() {

    std::string str;
    std::list<std::string> phrases;

    // ввод фраз
    while (std::getline(std::cin, str))
    {
        if (str.empty())
        {
            break;
        }
        
        phrases.push_back(str);   
    }

    
    /*
    // для проверки работоспособности ввода списка фраз
    for (auto iter = phrases.begin(); iter != phrases.end(); ++iter) {
        std::cout << *iter << "\n";  // печатаем элементы списка через итератор
    }
    */
    
    // теперь выполнение команд
    std::string command;

    // нужно завести "курсор" - удобнее пользоваться итератором
    auto curs = phrases.begin(); // изначально он будет на самой первой строке

    // также переменная для буфера обмена
    std::string buf = ""; // изначально он будет пустым


    while (std::cin >> command)
    {
        // перемещение курсора
        if (command == "Up")
        {
            if (curs == phrases.begin()) // операции Up с курсором на первой строке должны игнорироваться
            {
                continue;
            }
            else
            {
                --curs; // поднимает курсор вверх
            }
        }
        
        else if (command == "Down")
        {
            if (curs == phrases.end()) // операции Down с курсором на последней строке должны игнорироваться
            {
                continue;
            }
            else
            {
                ++curs; // опускает курсор вниз
            }
        }

        // вставка и вырезание
        else if (command == "Ctrl+X")
        {
            if (curs == phrases.end()) // операция Ctrl+X на пустой строке ничего не делает
            {
                continue;
            }
            else
            {
                buf = std::move(*curs); // запись в буфер вырезанной строки
                curs = phrases.erase(curs);  // удаляем эту позицию

            }
        }

        else if (command == "Ctrl+V")
        {
            if (buf.empty()) // операция Ctrl+V при пустом буфере ничего не делает
            {
                continue;
            }
            else
            {
                phrases.insert(curs, buf);  // вставляем на эту позицию элемент
            }
            
            
        }
    }
    
    //организуем вывод
    for (auto iter = phrases.begin(); iter != phrases.end(); ++iter) {
        std::cout << *iter << "\n";
    }
}

int main() {
    TextRedactor();
}