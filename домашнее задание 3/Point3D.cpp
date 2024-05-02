#include "Point3D.h"

Point3D::Point3D(): Point(), z(0) {} //инициализирует координаты точки значениями 0, 0, 0

Point3D::Point3D(int x, int y, int z) : Point(x, y), z(z) {} //инициализирует координаты точки указанными значениями x, y и z

Point3D::Point3D(const Point3D& pnt): Point(pnt), z(pnt.z) {} //создает копию точки с уже существующими значениями x, y и z


Point3D& Point3D::operator=(const Point3D& pnt)
{
	if (this != &pnt) {
		Point::operator=(pnt);
		z = pnt.z;
	}
	return *this;
}

Point3D Point3D::operator+(const Point3D& pnt) 
{
	return Point3D(x + pnt.x, y + pnt.y, z + pnt.z);
}

Point3D Point3D::operator-(const Point3D& pnt) 
{
	return Point3D(x - pnt.x, y - pnt.y, z - pnt.z);
}

bool Point3D::operator<(const Point3D& pnt)
{
	return (x < pnt.x) ||(x == pnt.x && y < pnt.y) || (x == pnt.x && y == pnt.y && z < pnt.z);
}

std::ostream& operator<<(std::ostream& out, const Point3D& pnt)
{
	out << "(" << pnt.x << ", " << pnt.y << ", " << pnt.z << ")";
	return out;
}
