#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << " ";
    }
    cout << endl;
    cout << "Length of the array is: " << arr->length << endl;
}

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

void insertAtindex(struct Array *arr)
{
    int index, newElement;
    cout << "enter at what index you want to add element: ";
    cin >> index;
    if (index < 0 && index > arr->length)
    {
        cout << "you had given invalid index: ";
        return;
    }
    if (arr->length == index)
    {
        Add(arr);
        return;
    }
    if (index > arr->length && index > arr->size)
    {
        cout << "you had given invalid index: ";
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
    cout << "enter the new element to be added: ";
    cin >> newElement;
    arr->A[index] = newElement;
    arr->length++;
}
void delet(struct Array *arr)
{
    int index;
    cout << "Enter the index no where you want to delete the element: ";
    cin >> index;
    int x = arr->A[index];
    for (int i = index; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
}
// searching of an elements************************************************
void linearSearch(struct Array *arr) // Array are not required in arrange order
{
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            cout << i;
        }
        else
        {
            cout << "search was unsuccesfull: ";
        }
    }
}
void swap(int &firstNumber, int &secondNumber)
{
    int temp;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}
void firstmethodeToReduceTimeInLinearSearch(struct Array *arr) // Transposition time reduce slowly
{
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            if (i != 0)
            {
                swap(arr->A[i], arr->A[i - 1]);
            }
            cout << "found at index: " << i - 1;
        }
    }
    cout << endl;
}
void secondMethodeToReduceTheLinearSearch(struct Array *arr) // move to head/front
{
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            if (i != 0)
            {
                swap(arr->A[i], arr->A[0]);
            }
            cout << "found at index: " << 0;
        }
    }
    cout << endl;
}
void binarySearch(struct Array *arr) // binary Search
{
    int key;
    int l = 0;
    int h = arr->length - 1;
    cout << "enter the key elemenet to be search: ";
    cin >> key;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        for (int i = 0; i < arr->length; i++)
        {
            if (key == arr->A[mid])
            {
                cout << "key found at index: " << mid;
                return;
            }
            else
            {
                if (key > arr->A[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
    }
    cout << "not found: ";
}
void getmethode(struct Array *arr)
{
    int index;
    cout << "enter the index of element:";
    cin >> index;
    if (index >= 0 && index < arr->length)
    {
        cout << arr->A[index];
    }
}
void setMethode(struct Array *arr)
{
    int index, indexValue;
    cout << "Enter the index where you want to change the Element:";
    cin >> index;
    if (index >= 0 && index < arr->length)
    {
        cout << "Enter index value: ";
        cin >> indexValue;
        arr->A[index] = indexValue;
    }
}
void findMaxInArray(struct Array *arr)
{
    int max = arr->A[0];
    for (int i = 0; i < arr->length; i++)
    {
        if (max < arr->A[i])
        {
            max = arr->A[i];
        }
    }
    cout << max;
}
void sum(struct Array *arr)
{
    int sum = 0;
    for (int i = 0; i < arr->length; i++)
    {
        sum += arr->A[i];
    }
    cout << sum;
}
void reverseArray(struct Array *arr) // reverse the Array
{
    int Array[arr->length];
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        Array[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = Array[i];
    }
}
void reverseArray_2(struct Array *arr)
{
    int start = 0;
    int end = arr->length - 1;
    while (start < end)
    {
        swap(arr->A[start], arr->A[end]);
        start++;
        end--;
    }
    display(arr);
}
void leftshift(struct Array *arr)
{
    int firstValue = arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
        arr->A[i - 1] = arr->A[i];
    }
    // arr->A[arr->length - 1] = 0;
    // for Rotate the Array in left wise
    arr->A[arr->length - 1] = firstValue;
    display(arr);
}
int insertElementInSortOrder(struct Array *arr)
{
    int element, i;
    cout << "enter the element to be inserted: ";
    cin >> element;
    for (i = arr->length - 1; i >= 0 && arr->A[i] > element; i--)
    {
        arr->A[i + 1] = arr->A[i];
    }
    arr->A[i + 1] = element;
    arr->length++;

    display(arr);
}
void checksortMethode(struct Array *arr)
{
    int j = 1;
    int i = 0;
    while (j < arr->length)
    {
        if (arr->A[i] <= arr->A[j])
        {
            i++;
            j++;
        }
        else
        {
            cout << "Array is not sorted: ";
            return;
        }
    }
    cout << "Array is sorted: ";
}
bool isSorted(struct Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    // for (int i = 0; i < arr.size; i++)
    // {
    //     if (arr.A[i] != 0)
    //     {
    //         arr.length++;
    //     }
    // }
    if (isSorted(&arr))
    {
        cout << "sorted: ";
    }
    else
    {
        cout << "not sorted: ";
    }
    // display(&arr);
    // Add(&arr);
    // display(&arr);
    // insertAtindex(&arr);
    // delet(&arr);
    // display(&arr);
    // linearSearch(&arr);
    // firstmethodeToReduceTimeInLinearSearch(&arr);
    // secondMethodeToReduceTheLinearSearch(&arr);
    // display(&arr);
    // binarySearch(&arr);
    // getmethode(&arr);
    // setMethode(&arr);
    // display(&arr);
    // findMaxInArray(&arr);
    // sum(&arr);
    // reverseArray_2(&arr);
    // display(&arr);
    // leftshift(&arr);
    // isSorted(&arr);

    return 0;
}