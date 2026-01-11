#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution s;

    // Example 1
    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int k1 = s.removeElement(nums1, val1);

    cout << "Output k = " << k1 << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    // Example 2
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int k2 = s.removeElement(nums2, val2);

    cout << "Output k = " << k2 << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;

    return 0;
}
