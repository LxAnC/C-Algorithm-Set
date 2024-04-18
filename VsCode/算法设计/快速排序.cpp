/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
//快排
#include <iostream>
#include <vector>
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1); 

        if (arr[j] <= pivot) {
            i++; 
            std::swap(arr[i], arr[j]); 
        }
    
    std::swap(arr[i + 1], arr[high]);
    return (i + 1); // 返回分区索引
}

// 快速排序的辅助函数，用于调用快速排序
void quickSortWrapper(std::vector<int>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}

// 打印数组的函数
void printArray(const std::vector<int>& arr) {
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    std::cout << "原数组: "<<std::endl;
    printArray(arr);

    quickSortWrapper(arr);

    std::cout << "排序后"<<std::abort;
    printArray(arr);

    return 0;
}