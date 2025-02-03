/**
 * bubble_sort.cpp - Implementation of the Bubble Sort Algorithm in C++
 *
 * Description:
 * - This module implements the Bubble Sort algorithm in C++.
 * - Bubble Sort is a simple comparison-based sorting algorithm that repeatedly
 *   iterates through the array, swaps adjacent elements if they are in the
 *   wrong order, and moves the largest element to the end in each iteration.
 *
 * Time Complexity:
 * - Worst Case: O(N^2) (When the array is reverse sorted)
 * - Average Case: O(N^2) (For a randomly shuffled array)
 * - Best Case: O(N) (When the array is already sorted)
 *
 * Space Complexity:
 * - O(1) (In-place sorting algorithm)
 *
 * Usage:
 * - Compile: `g++ -o bubble_sort bubble_sort.cpp -std=c++17`
 * - Run: `./bubble_sort`
 *
 * Metadata:
 * - Author: Kanagaraj N N
 * - Date: February 1, 2025
 * - Version: 1.0
 * - License: MIT (see LICENSE file for details)
 */

#include "../include/bubble_sort.h"

using std::cout;
using std::endl;
using std::vector;

void bubble_sort(vector<int>& arr) {
    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void print_array(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

/*
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Unsorted array: ";
    print_array(arr);
    
    bubble_sort(arr);
    
    cout << "Sorted array: ";
    print_array(arr);
    
    return 0;
}
*/
