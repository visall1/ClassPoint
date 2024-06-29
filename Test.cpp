#include<iostream>
#include<cmath>
using namespace std;
class Point {
	double x, y;
public:
	double e = 0.0001;
	static string name; //static member variable
	Point() :x(0), y(0) {
		Point::name = name;
	}
	Point(double x, double y, string name)
		:x(x), y(y) {
		Point::name = name;
	}
	void Show() {
		cout << name << " : X= " << x << " Y= " << y << endl;
	}
	bool IsSame(const Point& p1) {
		double ex = abs(x = p1.x);
		double ey = abs(y = p1.y);
		return ex < e && ey < e;
	}
};
string Point::name = "";

int main() {

	Point p1(5.000005, 9.00000, "");
	Point p2(5.000035, 9.000045, "ABC");
	p1.e = 0.00001;
	Point::name = "Point";
	std::cout << "Hello\n";
	p1.Show();
	p2.Show();

	if (p1.IsSame(p2)) { cout << "p1 ==p2\n"; }
	else cout << "p1 != p2 \n";

	if (p2.IsSame(p1)) { cout << "p2 == p1\n"; }
	else cout << "p2 != p2\n";
	return 0;
}