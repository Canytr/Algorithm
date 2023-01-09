//Sorting example 
#include <iostream>
#include <vector>

// Function to partition the array and return the pivot index
int partition(std::vector<int>& arr, int low, int high)
{
    // Choose the rightmost element as pivot
    int pivot = arr[high];

    // Index of the smaller element
    int i = low - 1;

    // Iterate through the array and swap elements
    // that are smaller than the pivot with the
    // element at i
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot with the element at i + 1
    std::swap(arr[i + 1], arr[high]);

    // Return the pivot index
    return (i + 1);
}

// Recursive function to sort the array using quicksort
void quicksort(std::vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the pivot index
        int pivot = partition(arr, low, high);

        // Recursively sort the left half of the array
        quicksort(arr, low, pivot - 1);

        // Recursively sort the right half of the array
        quicksort(arr, pivot + 1, high);
    }
}

int main()
{
    std::vector<int> arr = { 5, 2, 1, 4, 3 };

    // Sort the array
    quicksort(arr, 0, arr.size() - 1);

    // Print the sorted array
    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    return 0;
}