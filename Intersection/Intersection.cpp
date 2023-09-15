#include <iostream>
#include <vector>

std::vector<int> findArrayIntersection(std::vector<int> &arr1, int n, std::vector<int> &arr2, int m)
{
    std::vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        int element = arr1[i];
        
        for (int j = 0; j < m; j++) {
            if (element == arr2[j]) {
                ans.push_back(element);
                arr2[j] = -2; // Mark the element in arr2 as visited
                break;
            }
        }
    }
    
    return ans;
}

int main() {
    std::vector<int> arr1 = {1, 2, 2, 1};
    std::vector<int> arr2 = {2, 2};
    
    std::vector<int> result = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    
    std::cout << "Intersection of the two arrays: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
