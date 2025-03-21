#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    void reverseString(string& s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    string s;
    
    // Take string input from the user
    cout << "Enter a string: ";
    getline(cin, s);

    // Create Solution object and call the function
    Solution solution;
    solution.reverseString(s);

    // Print reversed string
    cout << "Reversed string: " << s << endl;

    return 0;
}