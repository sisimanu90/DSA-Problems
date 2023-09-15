#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; // Add this line to avoid writing 'std::'

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                // Ensure the pair is sorted in ascending order
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    
    // Sort the pairs in lexicographical order
    sort(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    vector<int> arr = {3, 2, 1, 4, 5, 6};
    int targetSum = 5;
    
    vector<vector<int>> result = pairSum(arr, targetSum);
    
    cout << "Pairs with sum " << targetSum << ": " << endl;
    for (const auto &pair : result) {
        cout << pair[0] << " " << pair[1] << endl;
    }
    
    return 0;
}

