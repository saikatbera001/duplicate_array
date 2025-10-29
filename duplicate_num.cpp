#include <iostream>
using namespace std;

int duplicate_num(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    int arr[10];
    cout << "Enter the element of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    if (duplicate_num(arr, size, key))
    {
        cout << "Duplicate found" << endl;
    }
    else
    {
        cout << "No duplicate found" << endl;
    }

    printarray(arr, size);
    return 0;
}