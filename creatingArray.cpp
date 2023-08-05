#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};

int main()
{
    struct Array arr;
    cout << "Enter the size of an Array "
         << " ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "enter the element of the array "
         << " ";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
        arr.length++;
    }
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i];
    }
    cout << endl;
    cout << arr.length;
    delete[] arr.A;
    arr.A = nullptr;
    return 0;
}