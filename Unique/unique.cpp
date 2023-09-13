/* Problem Statement
Suggest Edit
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
 Note:
Unique element is always present in the array/list according to the given condition.
*/ 
#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 1 ,6 ,3, 6 ,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, size);

    cout << "Unique element: " << unique << endl;

    return 0;
}
