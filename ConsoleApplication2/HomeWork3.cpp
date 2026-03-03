#include <iostream>
#include <cmath> 

using namespace std;

struct Point {
    double x;
    double y;

    // Константный метод для вычисления расстояния до другой точки
    double distanceTo(const Point& other) const 
    {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
};

int main() {
    system ("chcp 65001");
    
    Point p1 = {1.0, 2.0};
    Point p2 = {4.0, 6.0};

    cout << "Расстояние между точками: " << p1.distanceTo(p2) << endl;
    return 0;
}