#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    int area();
};
int rectangle::area()
{
    return length * breadth;
}
int main()
{
    struct rectangle rect; // method of declerations
    // struct rectangle rect={10,5}; //another method of decleartions
    rect.length = 3;
    rect.breadth = 5;
    cout << rect.area();
    return 0;
}