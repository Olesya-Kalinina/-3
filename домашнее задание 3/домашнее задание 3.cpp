#include <iostream> 
#include "Point.h" 
#include "Point3D.h" 

int main()
{
    Point points[5]; //Создается массив "points" из 5 объектов класса "Point"
    

    for (int i = 0; i < 5; i++) { //ввод координат точек
        int x, y, z;
        std::cout << "Enter x, y, z: " << i + 1 << ": ";
        std::cin >> x >> y >> z;
        points[i] = Point3D(x, y, z);
    }

    Point3D sum; //создаем объект класса Point3D для вычисления суммы всех точек
    for (int i = 0; i < 5; i++) {
        sum = sum + points[i];
    }
    std::cout << "Sum of Points: " << sum << std::endl;

    for (int i = 1; i < 5; i++) { //сравниваем все точки с первой точкой в массиве
        if (points[i] < points[0]) {
            std::cout << "Point " << i + 1 << " is less, then point 1" << std::endl;
        }
        else {
            std::cout << "Point " << i + 1 << " is not less, then point 1" << std::endl;
        }
    }
       
    return 0;
}