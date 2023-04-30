#include <iostream>
using namespace std;
class circle
{
private:
    double radius;
    double pi = 3.14159;

public:
    circle()
    {
        radius = 0.0;
    }
    circle(double radius)
    {
        this->radius = radius;
    }
    void setRadius()
    {
        this->radius = radius;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return (pi * radius * radius);
    }
    double getDiameter()
    {
        return (radius * 2);
    }
    double getCircumference()
    {
        return (2 * pi * radius);
    }
};

int main()
{
    circle c1(12);
    cout << c1.getRadius() << endl;
    ;
    cout << c1.getCircumference() << endl;
    cout << c1.getDiameter() << endl;
}