#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    int area();
};
void displayArea(rectangle &rect)
{
    int area = rect.area();
    cout << "Area: " << area << endl;
}
int rectangle::area()
{
    return length * breadth;
}
int main()
{
    // creating pointer in stack and accessing the data

    /*struct rectangle r;
    struct rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 5;*/

    // creating memory in heap and accessing the data

    struct rectangle *p;
    p = new rectangle;
    p->length = 8;
    p->breadth = 4;
    displayArea(*p);
    delete p;
    p = nullptr;
    return 0;
}