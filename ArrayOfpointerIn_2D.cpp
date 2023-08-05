#include <iostream>
using namespace std;
void print_2D_Array(int *Arr[], int sizee, int sizes) //*Arr[] is Array of int pointer
{
    for (int i = 0; i < sizee; i++)
    {
        for (int j = 0; j < sizes; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int *A[3]; // Array of integer pointer are created in stack
    A[0] = new int[4];
    A[1] = new int[4]; // Array created in heap with respective ponter with size 4
    A[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            A[i][j] = i + 2;
        }
    }
    print_2D_Array(A, 3, 4); // passing Array of  A to the Array of int pointer
    delete[] A[0];
    delete[] A[1];
    delete[] A[2];
    *A = nullptr;
    return 0;
}