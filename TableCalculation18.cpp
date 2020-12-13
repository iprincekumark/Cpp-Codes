/*
Design a class overloadDemo to overload a method volume() as follows:
(i)double volume(double r) with one double argument, returns the volume of a sphere using the formula:
volume = (4πr^3)/3
(ii)double volume(double r, double h) with two double arguments, returns the volume of a cone using the formula:
volume = (1/3)πhr^2
(iii)double volume(double I,double b, double h) with three double arguments, returns the volume of a cuboid using the formula:
volume = lbh
*/
#include <iostream>
using namespace std;
class overloadDemo
{
public:
    double volume(double r)
    {
        double volume = 3.14 * (4.0 / 3.0);
        return volume * r * r * r;
    }
    double volume(double r, double h)
    {
        double volume = 3.1415926 * (1.0 / 3.0);
        return (volume * r * r * h);
    }
    double volume(double I, double b, double h)
    {
        return (I * b * h);
    }
};
int main()
{
    double r, h, I, v1, v2, v3;
    overloadDemo o;
    cout << "Enter the Radius to find the volume of sphere : \n";
    cin >> r;
    v1 = o.volume(r);
    cout << "Enter the Radius and Height to find the volume of cone : \n";
    cin >> r >> h;
    v2 = o.volume(r, h);
    cout << "Enter the Length, Breadth and Height to find the volume of cuboid : \n";
    cin >> r >> h >> I;
    v3 = o.volume(r, h, I);
    cout << "Volume of Sphere is " << v1 << endl;
    cout << "Volume of Cone is " << v2 << endl;
    cout << "Volume of Cuboid is " << v3 << endl;
}