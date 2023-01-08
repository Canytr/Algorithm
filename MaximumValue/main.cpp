#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   // Declare an array of integers
    int values[] = {3, 7, 1, 9, 2, 5};
    
    // Find the length of the array
    int n = sizeof(values) / sizeof(values[0]);
    
    // Initialize the maximum value to the first element in the array
    int max_value = values[0];
    
    // Iterate through the rest of the array and update the maximum value if necessary
    for (int i = 1; i < n; i++)
    {
        if (values[i] > max_value)
        {
            max_value = values[i];
        }
    }
    
    // Print the maximum value
    cout << "The maximum value is: " << max_value << endl;
    
    return 0; 
}