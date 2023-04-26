#include <iostream>
using namespace std;
class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(int num, string description, int unitsOnHand, double price)
    {
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
        num = 0;
    }

    void setDescription(string description)
    {
        this->description = description;
    }
    void setUnitsOnHand(int unitsOnHand)
    {
        this->unitsOnHand = unitsOnHand;
    }
    void setPrice(double price)
    {
        this->price = price;
    }

    string getDescription()
    {
        return description;
    }
    int getUnitsOnHand()
    {
        return unitsOnHand;
    }
    double getPrice()
    {
        return price;
    }
    void print_info()
    {
        int num;
        cout << "Item #" << num << "\t" << description << "\t" << unitsOnHand << "\t" << price << endl;
    }
};
int main()
{
    RetailItem Item_1(1, "Jacket", 12, 59.95);
    Item_1.print_info();
    RetailItem Item_2(2, "Designer Jeans", 40, 34.95);
    Item_2.print_info();
    RetailItem Item_3(3, "Shirt", 20, 24.95);
    Item_3.print_info();
}