#include <iostream>
using namespace std;
class car
{
private:
    int YearModel;
    string make;
    int speed;

public:
    car(int YearModel, string make)
    {
        this->YearModel = YearModel;
        this->make = make;
        speed = 0;
    }
    int getYearModel()
    {
        return YearModel;
    }
    string getMake()
    {
        return make;
    }
    int getSpeed()
    {
        return speed;
    }
    int accelerate()
    {
        return speed += 5;
    }
    int brake()
    {
        return speed -= 5;
    }
};
int main()
{
    car toyota(2002, "Japan");
    for (int i = 0; i < 5; i++)
    {
        toyota.accelerate();
    }
    cout << "The Current speed is : " << toyota.getSpeed() << endl;
    for (int i = 0; i < 5; i++)
    {
        toyota.brake();
    }
    cout << "The Stopped speed is : " << toyota.getSpeed() << endl;
}