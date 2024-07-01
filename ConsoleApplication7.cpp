#include<iostream>
using namespace std;
class Point {
	double x, y;
	static double E;
public:
	Point(double x,double y):x(x),y(y){}
	static void showPoint(const Point& p) {
		cout << "Point : " << E << endl;
		cout << "X : " << std::abs(p.x) << endl;
		cout << "Y : " << p.y << endl;
	}
};
double Point::E = 3.70001;
int main() {
	Point a(-7.884002, 5.00001);
	Point::showPoint(a);

	return 0;
}