/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-18
 */
// 快排
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{

    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
        swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void quickSortWrapper(vector<int> &arr)
{
    quickSort(arr, 0, arr.size() - 1);
}
void printArray(const vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    printArray(arr);
    quickSortWrapper(arr);
    printArray(arr);

    return 0;
}