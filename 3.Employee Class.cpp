#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int IdNumber;
    string department;
    string position;

public:
    Employee(string name, int IdNumber, string department, string position)
    {
        this->name = name;
        this->IdNumber = IdNumber;
        this->department = department;
        this->position = position;
    }
    Employee(string name, int IdNumber)
    {
        department = " ";
        position = " ";
    }

    string getName()
    {
        return name;
    }
    int getIdNumber()
    {
        return IdNumber;
    }
    string getDepartment()
    {
        return department;
    }
    string getPosition()
    {
        return position;
    }
    Employee()
    {
        name = " ";
        IdNumber = 0;
        department = " ";
        position = " ";
    }
    void print()
    {
        cout << "Name : " << name << " \t ID Number : " << IdNumber << "\t Department : " << department << "\t Position : " << position << endl;
    }
};

int main()
{
    Employee person1("Susan Meyers", 47899, "Accounting", "Vice President");
    person1.print();
    Employee person2("Mark Jones", 39119, "IT", "Programmer");
    person2.print();
    Employee person3("Joy Rogers", 81774, "Manufacturing", "Engineer");
    person3.print();
}