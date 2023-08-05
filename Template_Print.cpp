#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <string>

template <typename T>
void Print(const T& type_of_container, const std::string& delimiter) {
    for (auto iter = type_of_container.begin(); iter != type_of_container.end(); ++iter) {
        std::cout << *iter;
        if (std::next(iter) != type_of_container.end()) {
            std::cout << delimiter;
        } else {
            continue;
        }
    }
    std::cout << "\n";
    

}

/*
//тестирование
int main() {
    std::vector<int> data = {1, 2, 3};
    Print(data, ", ");
}
*/