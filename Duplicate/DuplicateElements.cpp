//Duplicate In Array
#include <vector>
#include <iostream>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int n = arr.size();
    
    // XOR all elements in the array
    int xorAll = 0;
    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];
    }
    
    // XOR all numbers from 1 to n-1
    int xorNMinus1 = 0;
    for (int i = 1; i < n; i++) {
        xorNMinus1 ^= i;
    }
    
    // The result will be the duplicate element
    return xorAll ^ xorNMinus1;
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    
    // Find the duplicate element in the array
    int duplicate = findDuplicate(arr);
    
    cout << "Duplicate element: " << duplicate << endl;

    return 0;
}
