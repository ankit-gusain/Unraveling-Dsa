// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <bits/stdc++.h>

using namespace std;

// Function to find the longest common prefix
string longestCommonPrefixMethod1(const vector<string> &strs)
{
    if (strs.empty())
        return "";

    // Start with the prefix as the first string
    string prefix = strs[0];

    // Compare prefix with each string
    for (size_t i = 1; i < strs.size(); ++i)
    {
        while (strs[i].find(prefix) != 0)
        {                                                 // Check if prefix is not a prefix of strs[i]
            prefix = prefix.substr(0, prefix.size() - 1); // Reduce the prefix length
            if (prefix.empty())
                return ""; // No common prefix
        }
    }
    return prefix;
}

string longestCommonPrefixMethod2(vector<string> &strs)
{
    if (strs.empty())
        return "";

    string ans;
    int index = 0;

    while (true)
    {
        char currentChar = '\0'; // Initialize to null character

        for (const auto &str : strs)
        {
            if (index >= str.size())
            {
                // Current index is out of bounds for this string
                return ans;
            }
            if (currentChar == '\0')
            {
                // Set the currentChar for the first string
                currentChar = str[index];
            }
            else if (str[index] != currentChar)
            {
                // Characters don't match
                return ans;
            }
        }

        // If all strings have the same character at this index
        ans.push_back(currentChar);
        index++;
    }
}
int main()
{
    int noOfStrings;
    cout << "Enter the number of strings: ";
    cin >> noOfStrings;

    // Clear the newline character left in the buffer by cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strs(noOfStrings);

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < noOfStrings; ++i)
    {
        getline(cin, strs[i]);
    }

    // Find and display the longest common prefix
    string prefix = longestCommonPrefixMethod2(strs);
    cout << "Longest common prefix: " << prefix << endl;

    return 0;
}
