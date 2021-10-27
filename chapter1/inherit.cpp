#include <iostream>

using namespace std;

class Point2D
{
public:
    Point2D(int _x, int _y) : x(_x), y(_y) {}
    virtual void print() const
    {
        cout << "(" << x << "," << y <<")" << endl;
    }
    ~Point2D() {}

protected:
    int x;
    int y;
};

class Point3D : public Point2D
{
public:
    Point3D(int _x, int _y, int _z, int* Iptr) : Point2D(_x, _y), z(_z), ptr(Iptr) {}
    void print() const
    {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }

private:
    int z;
    int* ptr;
};

int main()
{
    int a = 10;
    int* Iptr = &a;
    Point2D *p2d = new Point3D(1, 2, 3, Iptr);
    p2d->print();
}