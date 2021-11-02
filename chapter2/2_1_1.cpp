#include <iostream>

using namespace std;

class Foo {
public:
    int val;

public:
    Foo() {val = 0;}
};

class Bar {
public:
    Foo foo;
    int b_val;
public:
    Bar() {b_val = 1;}
};

int main() {
    Bar bar;
    cout << "bar.foo.val: " << bar.foo.val << endl;
    cout << "Bar::b_val: " <<bar.b_val << endl;
}