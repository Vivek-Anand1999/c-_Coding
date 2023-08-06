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
    rectangle(int l = 0, int b = 0);
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
rectangle::rectangle(int l, int b)
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
class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid(int height = 0, int length = 0, int breadth = 0); // constructor
    void setHeight(int height);                              // setting the height
    int getHeight();                                         // returning the height
    int volume();
};
cuboid::cuboid(int height, int length, int breadth)
{ // constructor defination using scope resolution
    setHeight(height);
    setLength(length);
    setBreadth(breadth);
}
void cuboid::setHeight(int height)
{
    if (height > 0)
    {
        this->height = height;
    }
    else
    {
        this->height = 0;
    }
}
int cuboid::getHeight()
{
    return height;
}
int cuboid::volume()
{
    return height * getLength() * getBreadth();
}
int main()
{
    rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    // cout << r1.area();
    cuboid c(2, 3, 4);
    cout << "volume of cuboid: " << c.volume();
    return 0;
}
