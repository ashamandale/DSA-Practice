//2527. Find Xor-Beauty of Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 4, 2};

    Solution obj;
    cout << obj.xorBeauty(nums);

    return 0;
}

