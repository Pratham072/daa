
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); 
    int low = 0, high = n - 1;

   
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


int partition(std::vector<int>& arr, int low, int high) {
    
    int randomIndex = low + rand() % (high - low + 1);

  
    std::swap(arr[randomIndex], arr[high]);

    int pivot = arr[high]; // Pivot element
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}


void quicksort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}


void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
   
    srand(time(0));

    std::vector<int> arr = {12, 4, 5, 6, 7, 3, 1, 15};

    std::cout << "Original array: ";
    printArray(arr);

    int size = arr.size();
    quicksort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
*/
