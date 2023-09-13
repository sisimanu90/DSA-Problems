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
    
    for (int i = 1; i < n; i++) {
        xorAll^= i;
    }
    
    // The result will be the duplicate element
    return xorAll;
}

int main() {
    vector<int> arr = {1,2,3,4,4};
    
    // Find the duplicate element in the array
    int duplicate = findDuplicate(arr);
    
    cout << "Duplicate element: " << duplicate << endl;

    return 0;
}
