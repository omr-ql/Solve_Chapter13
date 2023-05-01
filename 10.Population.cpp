#include <iostream>
using namespace std;
class population
{
private:
    float pop_num;
    float death_num;
    float birth_num;

public:
    population()
    {
        this->pop_num = pop_num;
        this->birth_num = birth_num;
        this->death_num = death_num;
    }

    void setRate()
    {
        cout << "Enter The population number : " << endl;
        cin >> pop_num;
        cout << "Enter how many birth in these population : " << endl;
        cin >> birth_num;
        cout << "Enter how many death in these population : " << endl;
        cin >> death_num;
    }
    float getBirth()
    {
        cout << "Birth Rate = " << birth_num << " ÷ " << pop_num << " = " << (birth_num / pop_num) << endl;
        return 0;
    }
    float getDeath()
    {
        cout << "Death Rate = " << death_num << " ÷ " << pop_num << " = " << (death_num / pop_num) << endl;
        return 0;
    }
};

int main()
{
    population city1;
    city1.setRate();
    city1.getBirth();
    city1.getDeath();
}