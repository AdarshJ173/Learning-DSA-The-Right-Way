// What is a Hash Map? (std::unordered_map)
// Think of a Hash Map (or Hash Table) as a super-powered index.
// In an Array: You have to know the index (0, 1, 2) to get the value quickly.
// In a Hash Map: You can use any value (like a number, a string, or a name) as the "key" to find what you want.
// Structure: It stores data in Pairs: Key -> Value.
//     For our Two Sum problem:
// Key: The number from the list (e.g., 2, 7, 11).
// Value: The index where that number is located (e.g., 0, 2, 1).
// Why is it O(1)? Instead of scanning every item (like a librarian checking every book on a shelf), a Hash Map uses a "hash function" to do a mathematical calculation on the Key. This calculation tells it exactly where that Key is stored in memory. It's a direct teleport to the data.

#include<unordered_map>
#include<iostream>
#include<array>
#include<vector>
using namespace std;

// 1. THE FUNCTION (The Chef)
vector<int> twoSum(vector<int>& nums, int target) {

    // 2. THE TOOL (The Notebook)
    // defined INSIDE the function
    unordered_map<int, int> notebook; //It stores the. Key and value. And remembers it

    // 3. THE LOGIC
    for(int i = 0; i < nums.size(); i++) {
        int currentNumber = nums[i];
        int complement = target - currentNumber;

        // Check if complement is in the notebook
        if(notebook.find(complement) != notebook.end()) {
            // FOUND IT!
            // Return index of complement (from notebook) and current index (i)
            return {notebook[complement], i};
        } else {
            // NOT FOUND.
            // Add current number and its index to the notebook for later
            notebook[currentNumber] = i;
        }
    }

    return {}; // Return empty if no solution
}

int main() {
    vector<int> arr = {3, 2, 4};
    int mytar = 6;

    // Call the function
    vector<int> result = twoSum(arr, mytar);

    // Print result
    if(result.size() == 2) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
