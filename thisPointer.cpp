#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int length);
    void setBreadth(int breadth);
    int getLength();
    int getBreadth();
    rectangle(int length, int breadth);
    int area();
    int perimeter();
};
void rectangle::setLength(int length)
{
    if (length > 0)
    {
        this->length = length;
    }
    else
    {
        this->length = 0;
    }
}
void rectangle::setBreadth(int breadth)
{
    if (breadth > 0)
    {
        this->breadth = breadth;
    }
    else
    {
        this->breadth = 0;
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
rectangle::rectangle(int length = 0, int breadth = 0)
{
    setLength(length);
    setBreadth(breadth);
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
    rectangle r1(10, 5);
    cout << r1.area();
    cout << r1.getLength();
    return 0;
}