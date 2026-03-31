#include <iostream>
using namespace std;

class Subject {
private:
    string name;                    // private data
public:
    void setValue(string n) {       // Member function to set value
        name = n;
    }

    friend void show(Subject obj);  // friend function declaration
};

void show(Subject obj) {            // Friend function defination
    cout << "Value = " << obj.name << endl;
}

int main() {
    Subject s;
    s.setValue("Data Science");
    show(s);
    
    return 0;
}
