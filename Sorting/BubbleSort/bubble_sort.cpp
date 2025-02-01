// Language: C++
// Solution 1: Bubble Sort Algorithm 
// Time: Worst - O(N^2), Avg - O(N^2), Best - O(N)
// Space: O(1)

#include <vector>
using namespace std;

void swap_elements(int i, int j, vector<int>& array) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

vector<int> bubbleSort(vector<int> array) {
    bool is_sorted = false;
    int counter = 0;

    while (!is_sorted) {
        is_sorted = true;

        for (int i = 0; i < array.size() - counter - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap_elements(i, i + 1, array);
                is_sorted = false;
            }
        }
        counter++;
    }
    return array;
}
