# Exponential Search Implementation in C++

This repository contains a C++ implementation of the Exponential Search algorithm. Exponential Search is particularly useful for searching in unbounded or infinite lists. It combines the power of binary search with an efficient method of finding the range where the target element is likely to exist.

## Algorithm Explanation

### Exponential Search

Exponential Search begins by finding the range where the target element might exist by progressively doubling the range index. Once the range is found, a binary search is performed within this range to find the exact position of the target element.

### Steps:

1. **Check the first element**: If the first element is the target, return its index.
2. **Range Doubling**: Start with an index of 1, and keep doubling it until the target is less than or equal to the element at this index or the index exceeds the array bounds.
3. **Binary Search**: Once the range is found, perform a binary search within this range to find the exact position of the target element.

### Time Complexity

- **Exponential Search**: `O(log i)` where `i` is the position of the target element.
- **Binary Search**: `O(log n)`

Overall, the time complexity is `O(log n)`.