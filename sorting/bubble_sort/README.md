![CPP CI](https://github.com/kanagarajnn/c-programming-solutions/actions/workflows/cpp-ci.yml/badge.svg)

# Bubble Sort Algorithm in C++

## Description
- This repository contains an implementation of the **Bubble Sort Algorithm** in **C++**, along with comprehensive unit tests using the **Google Test** framework.
- **Bubble Sort** is a simple comparison-based sorting algorithm that repeatedly iterates through the array, swaps adjacent elements if they are in the wrong order, and moves the largest element to the end in each iteration.

## Features
- **Pure C++ Implementation**  
  - Uses **C++ STL (`std::vector`)** for better efficiency and maintainability.
- **Optimized Implementation**  
  - Includes an optimization to stop early if no swaps occur in an iteration.
- **Modular Code Structure**  
  - Functions are separated into `.cpp` and `.h` files for better maintainability.
- **Unit Tests Included**  
  - Covers edge cases such as sorted arrays, reverse-sorted arrays, negative numbers, empty lists, single-element arrays, and duplicate values.
- **CI/CD Integrated**  
  - Tests are automated using GitHub Actions.

## Time Complexity
- **Worst Case (Reverse sorted array):** O(N²)  
- **Average Case (Random order):** O(N²)  
- **Best Case (Already sorted array):** O(N)

## Space Complexity
- **O(1)** (In-place sorting algorithm)

## Installation & Usage

### 1. Clone the Repository
```sh
$ git clone https://github.com/kanagarajnn/cpp-programming-solutions.git
$ cd cpp-programming-solutions/sorting/bubble_sort
```

### 2. Compile and Run Bubble Sort
```sh
$ g++ -o bubble_sort src/bubble_sort.cpp -std=c++17
$ ./bubble_sort
```

### 3. Import and Use in Another C Program
You can include bubble_sort.h in another project:
```sh
#include "bubble_sort.h"

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubble_sort(arr);
    
    // Function to print the sorted array
    print_array(arr);

    return 0;
}
```

## Running Unit Tests
Unit tests are included to validate the correctness of the implementation.

### 1. Compile and Run Tests
```sh
$ g++ -o test_bubble_sort tests/test_bubble_sort.cpp src/bubble_sort.cpp -lgtest -lgtest_main -pthread -std=c++17
$ ./test_bubble_sort
```

### 2. Run Tests on macOS (Using Homebrew-installed Google Test)
```sh
$ g++ -o test_bubble_sort tests/test_bubble_sort.cpp src/bubble_sort.cpp \
    -I/opt/homebrew/Cellar/googletest/1.15.2/include \
    -L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -pthread -std=c++17
$ ./test_bubble_sort
```

## Continuous Integration (CI) with GitHub Actions
This project is configured with GitHub Actions for automated testing.

## CI/CD Workflow Details:
- Runs tests automatically on every push and pull request to the main branch.
- Uses GCC and Google Test on an Ubuntu runner.
- Ensures code correctness before merging.

## How to Check CI/CD Status:
- Push your changes:
```sh
$ git push origin main
```
- Navigate to your GitHub repository → Actions tab.
- Check the workflow C++ CI to view test results.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Metadata
- Author: Kanagaraj N N
- Email: n.n.kanagaraj.upm@gmail.com
- GitHub: https://github.com/kanagarajnn
