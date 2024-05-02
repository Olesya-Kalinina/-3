#include "Point.h"

Point::Point(): x(0), y(0) {} //инициализирует координаты точки значениями 0,0


Point::Point(int x, int y) : x(x), y(y) {} //инициализирует координаты точки указанными значениями x и y

Point::Point(const Point& pnt): x(pnt.x), y(pnt.y) {} //создает копию точки с уже существующими значениями x и y


Point& Point::operator=(const Point& pnt) {
	this->x = pnt.x; 
	this->y = pnt.y;
	return *this;
}
Point Point::operator+(const Point& pnt) 
{
	return Point(x + pnt.x, y + pnt.y);
}
bool Point::operator<(const Point& pnt) {
	return (x < pnt.x) or(x == pnt.x && y < pnt.y);
}
std::ostream& operator<<(std::ostream& out, const Point& pnt)
{
	out << "(" << pnt.x << ", " << pnt.y << ")";
	return out;
}
