#include <iostream>
using namespace std;
class personal
{
private:
    string name;
    string address;
    short age;
    string phonenumber;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setPhoneNumber(string phonenumber)
    {
        this->phonenumber = phonenumber;
    }
    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }
    int getAge()
    {
        return age;
    }
    string getPhoneNumber()
    {
        return phonenumber;
    }
    void print_information()
    {
        cout << "* The name : " << name << "\n"
             << "* The age : " << age << "\n"
             << "* The Phone Number : " << phonenumber << "\n"
             << "* The address : " << address << endl;
    }
};
int main()
{
    personal human_1, human_2, human_3;
    human_1.setName("Omar Abdullah");
    human_1.setAddress("ST.Taha Abdulpar");
    human_1.setAge(20);
    human_1.setPhoneNumber("+20-1025321949");
    human_1.print_information();
    cout << "--------------------------------------------------" << endl;
    human_2.setName("Abdullah Saeed");
    human_2.setAddress("ST.ALmaslom");
    human_2.setAge(43);
    human_2.setPhoneNumber("+966-050279003");
    human_2.print_information();
    cout << "--------------------------------------------------" << endl;
    human_3.setName("Emad Qtaab");
    human_3.setAddress("ST.Alamaria");
    human_3.setAge(20);
    human_3.setPhoneNumber("+966-05715692");
    human_3.print_information();
    cout << "--------------------------------------------------" << endl;
}