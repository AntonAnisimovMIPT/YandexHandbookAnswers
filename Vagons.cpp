#include <iostream>
#include <deque> //т.к добавление/удаление вагонов идет либо с начала, либо с конца, а не с середины и т.п, то деком удобно пользоваться
#include <string>
#include <iterator>

void MakeTrain() {
    
    std::string str;
    //создадим дек
    std::deque<int> train(0);

    //организуем инициализацию поезда
    size_t arguments;
    while (std::cin >> str)
    {
        
        //с добавлением вагонов все просто
        if (str == "+left")
        {
            std::cin >> arguments;
            train.push_front(arguments);
        }
        if (str == "+right")
        {
            std::cin >> arguments;
            train.push_back(arguments);
        }
        
        //теперь удаление вагонов
        if (str == "-left")
        {
            std::cin >> arguments;
            if (arguments >= train.size()) //если длина состава меньше удаляемого кол-ва вагонов, то убираем весь состав целиком
            {
                train.clear();
            }
            else
            {
                train.erase(train.begin(), train.begin() + arguments);
            } 
        }

        if (str == "-right")
        {
            std::cin >> arguments;
            if (arguments >= train.size()) //если длина состава меньше удаляемого кол-ва вагонов, то убираем весь состав целиком
            {
                train.clear();
            }
            else
            {
                train.erase(train.end() - arguments, train.end());
            }
        }
        
    
    }

    //теперь итоговый вывод
    for (auto iter = train.begin(); iter != train.end(); ++iter) {
    std::cout << *iter;
    if (std::next(iter) != train.end()) {
        std::cout << " ";
    }
    }
    std::cout << "\n";
}

/*
//тестирование
int main() {
    MakeTrain();
}
*/