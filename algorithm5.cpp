#include <iostream>
using namespace std;

int BinarySearchDAC(int arr[], int low, int high, int target) {
if (low > high)
return -1;
int mid = low + (high - low) / 2;
if (arr[mid] == target)
return mid;
else if (arr[mid] > target)
return BinarySearchDAC(arr, low, mid - 1, target);

else
return BinarySearchDAC(arr, mid + 1, high, target);

}
int main() {
int arr[] = {2, 4, 6, 8, 10, 12, 14};
int n = sizeof(arr) / sizeof(arr[0]);
int target = 10;
int result = BinarySearchDAC(arr, 0, n - 1, target);
if (result != -1)
cout << "Element found at index: " << result << endl;
else
cout << "Element not found!" << endl;
return 0;
}

