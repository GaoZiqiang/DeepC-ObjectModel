#include <iostream>

using namespace std;

class Foo {
public:
    int val;
    static int s_val;
    Foo* pnext;

public:
    // 自定义显式构造函数
    Foo() {val = 0; pnext = nullptr;}
};

int Foo::s_val;

int main() {
    Foo bar;// 使用default constructor
    if (bar.val || bar.pnext) {
        cout << "存在Foo成员变量没有被初始化为0" << endl;
        cout << "var.val: " << bar.val << endl;
        cout << "var.pnext: " << bar.pnext << endl;
    } else {
        cout << "Foo成员变量全部被初始化为0" << endl;
    }

    cout << "bar.s_val: " << Foo::s_val << endl;
}