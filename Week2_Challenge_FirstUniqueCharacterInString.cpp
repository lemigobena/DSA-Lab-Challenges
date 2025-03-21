#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Find the first character with frequency 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1; // If no unique character found
    }
};

int main() {
    string s;

    // Take input from user
    cout << "Enter a string: ";
    cin >> s;

    Solution solution;
    int result = solution.firstUniqChar(s);

    // Print the result
    cout << "First unique character index: " << result << endl;

    return 0;
}
