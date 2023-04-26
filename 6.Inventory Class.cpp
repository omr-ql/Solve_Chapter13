#include <iostream>
using namespace std;
class Invantory{
private :
    int itemNumber ;
    int quantity ;
    double cost ;
    double totelCast;
public:
    Invantory () {
        itemNumber = 0 ;
        quantity = 0 ;
        cost = 0 ;
        totelCast = 0 ;
    }
    Invantory (int itemNumber, int quantity, double cost){
        this -> itemNumber = itemNumber ;
        this -> quantity = quantity ;
        this -> cost = cost ;
    }
    void setItemNumber (int itemNumber) {
        this -> itemNumber = itemNumber ;
    }
    void setQuantity (int quantity) {
        this -> quantity = quantity ;
    }
    void setCost (int cost) {
        this -> cost = cost ;
    }
    void setTotelCast () {
        totelCast = quantity * cost ;
    }
    int getItemNumber() {
        return itemNumber ;
    }
    int getQuantity () {
        return quantity;
    }
    double getCost () {
        return cost ;
    }
    double getTotelCast () {
        return totelCast ;
    }
};
int main () {
    Invantory item1(1,2,8.9);
    item1.setTotelCast();
    cout << item1.getTotelCast() ;
}