//Leetcode 136
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }
        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums = {4, 1, 2, 1, 2};

    int result = s.singleNumber(nums);
    cout << result << endl;   

    return 0;
}

