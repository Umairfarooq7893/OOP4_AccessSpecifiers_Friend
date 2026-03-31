#include<iostream>
using namespace std;

class Demo {
private:
    int x;
public:
    Demo() {
        x = 10;
    }
    // Member Function
    void memberShow() {
        cout << "Member Function: x = " << x << endl;
    }

    // Friend Function Declaration
    friend void friendShow(Demo d);
};

// Friend Function Definition
void friendShow(Demo d) {
    cout << "Friend Function: x = " << d.x << endl;
}

int main() {
    Demo obj;
    // Calling member function using object
    obj.memberShow();
    // Calling friend function like normal function
    friendShow(obj);
}