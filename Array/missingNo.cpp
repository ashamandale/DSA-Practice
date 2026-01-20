#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; i++) {
            ans ^= i;
        }

        // XOR all elements in the array
        for (int x : nums) {
            ans ^= x;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    // Example input
    vector<int> nums = {3, 0, 1};

    int result = obj.missingNumber(nums);
    cout << "Missing Number: " << result << endl;

    return 0;
}
