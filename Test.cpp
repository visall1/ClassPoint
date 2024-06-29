#include <iostream>
#include<cmath>
using namespace std;

class Point
{
    double x, y;
public:
    static double e;
    static string name;//static member variable
    Point() :x(0), y(0) {
        Point::name = "";
    }
    Point(double x, double y, string name)
        :x(x), y(y) {
        Point::name = name;
    }
    void Show() {
        cout << name << ": x=" << x << ", y=" << y << endl;
    }
    bool IsSame(const Point& p2) {
        double ex = abs(x - p2.x);
        double ey = abs(y - p2.y);
        return ex < e && ey < e;
    }
};
string Point::name = "";
double Point::e = 0.0001;
int main()
{
    Point p1(5.000005, 9.00009, "");
    Point p2(5.000035, 9.000045, "ABC");
    Point::e = 0.001;
    Point::name = "Point";
    std::cout << "Hello\n";
    p1.Show();
    p2.Show();
    if (p1.IsSame(p2)) { cout << "p1 == p2\n"; }
    else cout << "p1 != p2\n";

    if (p2.IsSame(p1)) { cout << "p2 == p1\n"; }
    else cout << "p2 != p1\n";
    return 0;
}
