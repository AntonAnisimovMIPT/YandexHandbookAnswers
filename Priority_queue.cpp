#include <iostream>
#include <string>
#include <queue>
#include <vector>

int main() {
    // объявим очередь с приоритетами
    std::priority_queue<int> pq;

    // объявим вектор для вывода
    std::vector<std::string> output;

    // ввод команд
    std::string command;
    while(std::getline(std::cin, command)) {

        if (command == "CLEAR") // делаем очередь пустой
        {
            while (!pq.empty()) {
                pq.pop();
            }
        }

        if (command == "EXTRACT") // вынимаем максимальное значение, выводим его, потом удаляем из очереди
        {
            if (pq.empty())
            {
                output.push_back("CANNOT");
            }

            else
            {
                output.push_back(std::to_string(pq.top()));
                pq.pop();
            }
            
            
        }

        if (command.substr(0,3) == "ADD") {
            int n = stoi(command.substr(4));
            pq.push(n);

        }
        
        

    }

    // вывод
    for (auto iter : output)
    {
        std::cout << iter << "\n";
    }
    


}