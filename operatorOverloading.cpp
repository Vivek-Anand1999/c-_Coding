#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int real, int img);
    void setReal(int real);
    void setImg(int img);
    int getReal();
    int getImg();
    complex add(complex c);
    complex operator +(complex c);
};
complex::complex(int real = 0, int img = 0)
{
    setReal(real);
    setImg(img);
}
void complex::setReal(int real)
{
    this->real = real;
}
void complex::setImg(int img)
{
    this->img = img;
}
int complex::getReal()
{
    return real;
}
int complex::getImg()
{
    return img;
}
complex complex::add(complex cx)
{
    complex temp;
    temp.real = real + cx.real;
    temp.img = img + cx.img;
    return temp;
}
complex complex::operator +(complex c) // operator overloading
{
complex temp;
temp.real=real + c.real;
temp.img=img + c.img;
return temp;
int main()
{
    complex c1(10, 2);
    complex c2(10, 2);
    complex c3 = c1.add(c2);
    cout << c3.getReal() << " "
         << " + " << c3.getImg() << "i";
    complex c4 = c1 + c2;// operator overloading
    cout<<c4.getReal() << " "<< " + "<< c4.getImg() << "i";
    return 0;
}
