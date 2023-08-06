#include <iostream>
using namespace std;
class test
{
private:
    int a;
    int b;

public:
    static int count;
    test(int a = 0, int b = 0);
};
int test::count = 0;
test ::test(int a, int b)
{
    a = 5;
    b = 9;
    count++;
}
int main()
{
    test t1;
    test t2;
    cout << t1.count;
    return 0;
}