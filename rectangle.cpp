#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    rectangle(int l, int b);
    int area();
    int perimeter();
};
void rectangle::setLength(int l)
{
    if (l > 0)
    {
        length = l;
    }
    else
    {
        length = 0;
    }
}
void rectangle::setBreadth(int b)
{
    if (b > 0)
    {
        breadth = b;
    }
    else
    {
        breadth = 0;
    }
}
int rectangle::getLength()
{
    return length;
}
int rectangle::getBreadth()
{
    return breadth;
}
rectangle::rectangle(int l = 0, int b = 0)
{
    setLength(l);
    setBreadth(b);
}
int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length + breadth);
}
int main()
{
    // using pointer on stack
    rectangle r1;
    rectangle *p;
    p = &r1;
    p->setBreadth(10);
    p->setLength(5);
    cout << p->area();
    // using pointer on heap
    rectangle *q = new rectangle; // Create a pointer to the Rectangle class
    q->setLength(10);
    q->setBreadth(5);
    cout << q->area() << endl;
    delete q;
    q = nullptr;
    return 0;
}