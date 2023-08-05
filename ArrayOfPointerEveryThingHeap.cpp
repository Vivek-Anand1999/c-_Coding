#include <iostream>
using namespace std;
void print(int *Arr[], int sizes, int sizee)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int **A;
    A = new int *[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            A[i][j] = i + 2;
        }
    }
    print(A, 3, 4);
    delete[] A;
    delete[] A[0];
    delete[] A[1];
    delete[] A[2];
    A = nullptr;
    return 0;
}