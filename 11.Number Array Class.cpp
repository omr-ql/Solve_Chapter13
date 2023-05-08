#include <iostream>
using namespace std;
class arrays
{
private:
    float *arr;

public:
    arrays(int n)
    {
        arr = new float[n];
    }

    ~arrays()
    {
        delete[] arr;
    }

    float storeNumber(float num, int index)
    {
        arr[index] = num;
        return num;
    }

    float retreveNumeber(int index)
    {
        return arr[index];
    }

    float hightestNum(int num)
    {
        int maximum = arr[0];
        for (int i = 0; i < num; i++)
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }
        return maximum;
    }
    float lowestNum(int num)
    {
        int minimum = arr[0];
        for (int i = 0; i < num; i++)
        {
            if (arr[i] < minimum)
            {
                minimum = arr[i];
            }
        }
        return minimum;
    }
    float avaregeNums(int num)
    {
        float sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum = arr[i] + sum;
        }
        return (sum / num);
    }
};
int main()
{
    arrays num(5);
    num.storeNumber(33, 0);
    num.storeNumber(44, 1);
    num.storeNumber(-1, 2);
    num.storeNumber(101, 3);
    num.storeNumber(888, 4);

    cout << "* The highest number in array is = " << num.hightestNum(5) << endl;
    cout << "* The lowest number in array is = " << num.lowestNum(5) << endl;
    cout << "* The the average = " << num.avaregeNums(5) << endl;
    cout << "* The number you have choose = " << num.retreveNumeber(2) << endl;
    return 0;
}
