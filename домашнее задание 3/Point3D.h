#pragma once
#include <iostream>
#include "Point.h"
class Point3D : 
    public Point
{
public:
    int z{ 0 };    
    Point3D();
    Point3D(int x, int y, int z); 
    Point3D(const Point3D& pnt);

    Point3D& operator=(const Point3D& pnt);
    Point3D operator+(const Point3D& pnt);    
    Point3D operator-(const Point3D& pnt);
    bool operator<(const Point3D& pnt);
    
    friend std::ostream& operator<<(std::ostream& out, const Point3D& pnt);
};
