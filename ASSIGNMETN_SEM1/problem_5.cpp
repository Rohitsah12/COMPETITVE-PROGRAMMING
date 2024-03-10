#include<bits/stdc++.h>
using namespace std;

int lowerBound(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return result;
}

int upperBound(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] > x) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return result;
}

bool isPresent(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x)
            return true;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return false;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x = 10;

    int lower_index = lowerBound(arr, x);
    int upper_index = upperBound(arr, x);
    bool present = isPresent(arr, x);

    cout << "Lower Bound Index: " << lower_index << endl;
    cout << "Upper Bound Index: " << upper_index << endl;
    cout << "Is " << x << " present in the array? " << (present ? "Yes" : "No") << endl;

    return 0;
}
