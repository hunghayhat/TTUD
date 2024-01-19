# All data-structure use in this course
- [All data-structure use in this course](#all-data-structure-use-in-this-course)
  - [Array](#array)
    - [Static Array](#static-array)
    - [Dynamic Array](#dynamic-array)
  - [Linked List](#linked-list)
  - [Stack](#stack)
  - [Queue](#queue)
    - [Priority Queue](#priority-queue)
    - [Deque](#deque)
  - [Set](#set)
  - [Map](#map)

## Array
### Static Array
- Fixed size
- Contiguous block of memory
- O(1) access | O(n) search | O(n) insertion/deletion | O(n) space
```cpp
int a[10];
for (int i = 0; i < 10; i++) {
  cin >> a[i];
}
```
### Dynamic Array
- Resizable
- Contiguous block of memory
- O(1) access | O(n) search | O(n) insertion/deletion | O(n) space
```cpp
// Declare
vector<int> a;
// Itterate
for (int i = 0; i < 10; i++) {
  int x;
  cin >> x;
  a.push_back(x); // Move to the end of array
}
// Sort
sort(a.begin(), a.end()); // O(nlogn)
sort(a.begin(), a.end(),greater<int>()); // O(nlogn)
// Reverse
reverse(a.begin(), a.end()); // O(n)
// Find
int x = 5;
auto it = find(a.begin(), a.end(), x); // O(n)
if (it != a.end()) {
  cout << "Found at index " << it - a.begin() << endl;
} else {
  cout << "Not found" << endl;
}
// Remove
a.erase(a.begin() + 5); // O(n)
// Insert
a.insert(a.begin() + 5, 10); // O(n)
// Size
cout << a.size() << endl;
// Clear
a.clear(); // O(n)
```
## Linked List
## Stack
## Queue
### Priority Queue
### Deque
## Set
## Map