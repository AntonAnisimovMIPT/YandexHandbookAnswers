#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> vec;
    std::string str;

    //сначала передадим строки в вектор
    while (std::getline(std::cin, str))
    {
        vec.push_back(str);
    }

    //отстортируем это вектор в обратноп опрядке
    std::sort(vec.rbegin(), vec.rend());

    //вывод
    for (size_t i = 0; i != vec.size(); ++i)
    {
        std::cout << vec[i] << '\n';
    }

}