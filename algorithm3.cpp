#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;

int LinearSearch(const vector<string>& names, const string& target) {
for (int i = 0; i < names.size(); i++)
if (names[i] == target) return i;
return -1;
}

int BinarySearch(vector<string>& names, const string& target) {
sort(names.begin(), names.end());
int low = 0, high = names.size() - 1;
while (low <= high) {
int mid = low + (high - low) / 2;
if (names[mid] == target) return mid;
else if (names[mid] < target) low = mid + 1;
else high = mid - 1;
}
return -1;
}
int main() {
vector<string> names = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank",
"Grace", "Hank", "Ivy", "Jack"};
names.insert(names.end(), 100000, "John");
string target = "Zara";

auto start = chrono::high_resolution_clock::now();
cout << "Linear Search: " << (LinearSearch(names, target) != -1 ? "Found" :
"Not Found") << endl;
auto end = chrono::high_resolution_clock::now();
cout << "Time: " << chrono::duration_cast<chrono::microseconds>(end -
start).count() << " microseconds." << endl;
start = chrono::high_resolution_clock::now();
cout << "Binary Search: " << (BinarySearch(names, target) != -1 ? "Found" :
"Not Found") << endl;
end = chrono::high_resolution_clock::now();
cout << "Time: " << chrono::duration_cast<chrono::microseconds>(end -
start).count() << " microseconds." << endl;
return 0;
}

