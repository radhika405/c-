#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
        }
    }
}

int main() {
    vector<int> arr = {44, 67, 12, 89, 45};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    selectionSort(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

