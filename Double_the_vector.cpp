#include <vector>
#include <algorithm>

template <typename T>
std::vector<T> Duplicate(std::vector<T>& v) {
    v.reserve(2*v.size()); // задаем размер, чтобы при двойном копировнии было место
    std::copy(v.begin(), v.end(), std::back_inserter(v));
    return v;
}