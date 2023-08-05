#include <iostream>
using namespace std;
int *returnByAddress(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    return (p);
}
int main()
{
    int *q;
    q = returnByAddress(5);
    for (int i = 0; i < 5; i++)
    {
        cout << q[i];
    }
    delete[] q;
    q = nullptr;
    return 0;
}