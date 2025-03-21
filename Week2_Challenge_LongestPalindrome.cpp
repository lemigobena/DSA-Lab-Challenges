#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto it : freq) {
            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                length += it.second - 1;
                hasOdd = true;
            }
        }

        return length + (hasOdd ? 1 : 0);
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    Solution solution;
    int result = solution.longestPalindrome(s);

    cout << "Longest palindrome length: " << result << endl;
    return 0;
}
