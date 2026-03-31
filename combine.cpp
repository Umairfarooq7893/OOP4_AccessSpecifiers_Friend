#include<iostream>
using namespace std;

class Base{
public:
    int a;        // public
private:
    int b;        // private
protected:
    int c;        // protected
public:
    void SetValues(){
        a = 1;
        b = 2;
        c = 3;
    }
    void show(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class Derived : public Base{
public:
    void access(){
        a = 10;   //  public accessible
     // b = 20;   //  private not accessible
        c = 30;   //  protected accessible in derived
    }
};

int main(){
    Base obj;
    obj.SetValues();
    obj.show();

    obj.a = 100;   //  public accessible
  //obj.b = 200;   //  private not accessible
  //obj.c = 300;   //  protected not accessible

    return 0;
} 