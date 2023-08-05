#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Add(struct Array *arr)
{
    if (arr->length == arr->size) // Use comparison operator (==) instead of assignment operator (=)
    {
        cout << "Array is full. We cannot add an element." << endl;
        return;
    }
    if (arr->length < arr->size)
    {
        int newElement;
        cout << "Enter the new element: ";
        cin >> newElement;
        arr->A[arr->length] = newElement;
        arr->length++;
        cout << "Element added successfully." << endl;
    }
}

void display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << " ";
    }
    cout << endl;
    cout << "Length of the array is: " << arr->length << endl;
}

void insertAtindex(struct Array *arr)
{
    int index, newElement;
    cout << "Enter at what index you want to add an element: ";
    cin >> index;
    if (index < 0 && index > arr->length)
    {
        cout << "You have given an invalid index." << endl;
        return;
    }
    if (arr->length == index)
    {
        Add(arr);
        return;
    }
    if (index > arr->length && index > arr->size)
    {
        cout << "You have given an invalid index." << endl;
        return;
    }
    if (index < arr->size || index > arr->length)
    {
        Add(arr);
        display(arr);
    }
    for (int i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i - 1];
    }
    cout << "Enter the new element to be added: ";
    cin >> newElement;
    arr->A[index] = newElement;
    arr->length++;
    display(arr);
}

int main()
{
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    display(&arr);
    Add(&arr);
    display(&arr);
    insertAtindex(&arr);
    display(&arr);
    return 0;
}
