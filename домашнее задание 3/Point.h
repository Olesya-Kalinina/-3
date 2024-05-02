#pragma once
#include <iostream> 
class Point
{
public:
	int x{ 0 };
	int y{ 0 };
	Point();
	Point(int x, int y);
	Point(const Point& pnt);

	Point& operator=(const Point& pnt);
	Point operator+(const Point& pnt);
	bool operator<(const Point& pnt);

	friend std::ostream& operator << (std::ostream& out, const Point& pnt);
};
