#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x;
    int y;
};

int main() {

    //сначала введем кол-во точек
    size_t n;
    std::cin >> n;

    //ициализируем вектор из точек
    std::vector<Point> all_points(n);
    for (size_t i = 0; i != n; ++i)
    {
        std::cin >> all_points[i].x >> all_points[i].y;
    }
    
    //приступаем к сортировке (абсолютно таким же образом, как было рассказано в разделе про лямбда-функции)
    std::sort(all_points.begin(), all_points.end(), [](const Point& point1, const Point& point2) {
        return point1.x * point1.x + point1.y * point1.y < point2.x * point2.x + point2.y * point2.y;
    });

    //вывод отсортированного вектора
    for (size_t i = 0; i != n; ++i)
    {
        std::cout << all_points[i].x << " " << all_points[i].y << "\n";
    }
    
}