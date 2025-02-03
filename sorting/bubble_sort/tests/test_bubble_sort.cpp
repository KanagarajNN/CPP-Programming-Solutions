/**
 * test_bubble_sort.cpp - Unit Tests for the Bubble Sort Algorithm
 *
 * Description:
 * - This file contains unit tests for the `bubble_sort` function using the Google Test framework.
 * - The tests cover various edge cases, including already sorted arrays, reverse-sorted arrays,
 *   negative numbers, single-element arrays, empty arrays, and arrays with duplicates.
 *
 * Usage:
 * - Compile and run the tests:
 *     `g++ -o test_bubble_sort tests/test_bubble_sort.cpp src/bubble_sort.cpp -lgtest -lgtest_main -pthread -std=c++17`
 *     `g++ -o test_bubble_sort tests/test_bubble_sort.cpp src/bubble_sort.cpp \
 *          -I/opt/homebrew/Cellar/googletest/1.15.2/include \
 *          -L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -pthread -std=c++17`
 *     `./test_bubble_sort`
 *
 * Metadata:
 * - Author: Kanagaraj N N
 * - Date: February 1, 2025
 * - Version: 1.0
 * - License: MIT
 */

#include "../include/bubble_sort.h"
#include <gtest/gtest.h>

TEST(BubbleSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(BubbleSortTest, ReverseSorted) {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(BubbleSortTest, RandomOrder) {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{11, 12, 22, 25, 34, 64, 90}));
}

TEST(BubbleSortTest, SingleElement) {
    std::vector<int> arr = {42};
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

TEST(BubbleSortTest, EmptyArray) {
    std::vector<int> arr = {};
    bubble_sort(arr);
    EXPECT_EQ(arr, std::vector<int>{});
}

TEST(BubbleSortTest, NegativeNumbers) {
    std::vector<int> arr = {10, -1, 3, 8, 5, 2, -3, 4};
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-3, -1, 2, 3, 4, 5, 8, 10}));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
