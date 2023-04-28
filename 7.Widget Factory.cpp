#include <iostream>

using namespace std;

class plan {
private:
    int widgets;

public:
    plan(float widgets) {
        this->widgets = widgets;
    }

    float clac() {
        float widgets;
        if (widgets > 1) {
            widgets = widgets / 160;
            cout << "the number of days it will take to produce them is : " << widgets;
        } else {
            cout << "Invalid Input" << endl;
        }
        return 0;
    }
};

int main() {
    int widgets;
    cout << "Enter the number of widgets : " << endl;
    cin >> widgets;
    plan test(widgets);
    test.clac();
}