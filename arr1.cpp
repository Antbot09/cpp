#include <iostream>
using namespace std;

void revarr(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, n);
    cout << "The rerversed array is: " << endl;
    revarr(arr, 0, n - 1);
    printarr(arr, n);

    return 0;
}