#include <iostream>
#include <string>
#include <vector>
#include <set>

int main() {

    // создадим контейнер, в которому будут храниться пути
    std::set<std::string> paths;

    // ввод строк
    std::string line;
    while (std::getline(std::cin, line))
    {
        // процесс нахождения всех слешей 
        std::vector<size_t> pos; // вектор позиций всех слешей
        size_t pos1 = line.find('/');  // позиция первого слеша
        pos.push_back(pos1);
        for (size_t i = pos1; i != line.size(); ++i)
        {
            if (pos[i] <= line.size())
            {
                pos.push_back(line.find('/', pos[i] + 1));  // позиции последующих слешей
            }
            else
            {
                break;
            }
            
            
        }
        //бираем последний мусорный элемент
        pos.pop_back();

        //теперь необходимо занести все пути в контейнер
        for (size_t i = 1; i != pos.size() ; i++)
        {
            paths.insert(line.substr(pos[0], pos[i] - pos[0]+1));
        }
        
        

    }

    if (!paths.empty())
        {
            std::cout << "/" << "\n";
        }
        
    
    // вывод путей
    for(auto i : paths)
    {
        std::cout << i << "\n";
    }
    
    


}