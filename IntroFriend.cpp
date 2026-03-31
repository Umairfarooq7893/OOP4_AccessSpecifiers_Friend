#include<iostream>
using namespace std;
class Box {
private:
    int length;
    int breadth;
    int height;
public:
    Box() {
        length  = 10;
        breadth = 20;
        height  = 30;
    }
    friend void showDisplay(Box a);
    friend void volume(Box b);
    friend void surfaceArea(Box c);
};
// Display function
void showDisplay(Box a){
    cout << "Length  = " << a.length << endl;
    cout << "Breadth = " << a.breadth << endl;
    cout << "Height  = " << a.height << endl;
}
// Volume function
void volume(Box b) {
    cout << "Volume  = " << (b.length * b.breadth * b.height) << endl;
}
// Surface Area function
void surfaceArea(Box c){
    cout << "Surface Area = "<< 2*(c.length*c.breadth + c.breadth*c.height + c.height*c.length);
}
int main() {
    Box obj;
    showDisplay(obj);
    volume(obj);
    surfaceArea(obj);

    return 0;
}
