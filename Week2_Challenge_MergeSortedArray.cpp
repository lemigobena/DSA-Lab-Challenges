#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  // pointer for nums1 (valid elements)
        int j = n - 1;  // pointer for nums2
        int k = m + n - 1;  // pointer for the merged array (nums1)

        // to avoid overwriting nums1 elements merge from the end as follow.
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If nums2 has remaining elements, copy them.
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    int m, n;
    cout << "Enter size of nums1 (m): ";
    cin >> m;
    cout << "Enter size of nums2 (n): ";
    cin >> n;

    vector<int> nums1(m + n), nums2(n);

    cout << "Enter elements of nums1 (first " << m << " elements sorted, rest are 0s): ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;  // Fill the extra space with 0.
    }

    cout << "Enter elements of nums2 (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
