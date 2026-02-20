//Q4.
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;
        int curr = 1;
        int ans = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                curr++;
            } else {
                ans += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        ans += min(prev, curr);
        return ans;
    }
};

int main() {
    Solution sol;
    
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    int result = sol.countBinarySubstrings(s);

    cout << "Number of valid substrings: " << result << endl;

    return 0;
}
