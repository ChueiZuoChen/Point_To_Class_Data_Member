#include <iostream>
using namespace std;

class X {
public:
    int a;

    void f(int b) { cout << b << endl; }
};

int main() {
    int X::*pa = &X::a;
    X obj;
    obj.a = 10;
    cout << "a=" << obj.*pa << endl;
}