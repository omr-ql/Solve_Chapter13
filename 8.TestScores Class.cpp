#include <iostream>
using namespace std;
class TestScores
{
private:
    int test1;
    int test2;
    int test3;

public:
    TestScores()
    {
        this->test1 = test1;
        this->test2 = test2;
        this->test3 = test3;
    }
    void setScores()
    {
        cout << "Please Enter the scores : " << endl;
        cin >> test1 >> test2 >> test3;
    }
    int getScores()
    {
        int total = (test1 + test2 + test3) / 3;
        cout << "The average of the scores is : " << total;
        return 0;
    }
};

int main()
{
    TestScores score1;
    score1.setScores();
    score1.getScores();
    return 0;
}