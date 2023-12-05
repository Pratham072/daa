#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int jumpSearch(const vector<int>& arr, int target) {
    int n = arr.size();
    int step = sqrt(n); 

   
    int prev = 0;
    while (arr[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1; 
        }
    }

    
    for (int i = prev; i < min(step, n); ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }

    return -1; 
}

int main() {
    vector<int> arr = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int target = 36;

    int result = jumpSearch(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
