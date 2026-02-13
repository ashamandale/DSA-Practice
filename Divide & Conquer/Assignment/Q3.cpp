//longestBalancedSubarray.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestBalancedSubarray(vector<int>& nums) {
    unordered_map<int, int> freq;
    unordered_map<int, int> firstIndex;

    int distinctEven = 0;
    int distinctOdd = 0;
    int maxLen = 0;

    firstIndex[0] = -1;   // important

    for (int i = 0; i < nums.size(); i++) {

        // Increase frequency
        freq[nums[i]]++;

        // If first time appearing
        if (freq[nums[i]] == 1) {
            if (nums[i] % 2 == 0)
                distinctEven++;
            else
                distinctOdd++;
        }

        int diff = distinctEven - distinctOdd;

        if (firstIndex.find(diff) != firstIndex.end()) {
            maxLen = max(maxLen, i - firstIndex[diff]);
        } else {
            firstIndex[diff] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> nums = {2,5,4,3};
    cout << longestBalancedSubarray(nums);
}
