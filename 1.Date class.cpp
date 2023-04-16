#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date(int day , int month , int year) {
        if ((day < 31 && day > 1) && (month < 12 && day > 1)) {
            cout << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid input" << endl;
        }
    }
    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setyear(int year)
    {
        this->year = year;
    }
    int getDay()
    {
            return day;
    }
    int getMonth()
    {
            return month;
    }
    int getYear()
    {
        return year;
    }
    void print() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d(2,3,100);
}