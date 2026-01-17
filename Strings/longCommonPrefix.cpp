#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);

            if (prefix == "") {
                return "";
            }
        }

        return prefix;
    }
};

int main() {
    Solution obj;
    // // Custom input
    // int n;
    // cout << "Enter number of strings: ";
    // cin >> n;

    // vector<string> strs(n);
    // cout << "Enter strings:\n";
    // for (int i = 0; i < n; i++) {
    //     cin >> strs[i];
    // }

    // Example 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Output: " << obj.longestCommonPrefix(strs1) << endl;   // fl

    // // Example 2
    // vector<string> strs2 = {"dog", "racecar", "car"};
    // cout << "Output: " << obj.longestCommonPrefix(strs2) << endl;   // (empty)

    

    //cout << "Longest Common Prefix: " << obj.longestCommonPrefix(strs) << endl;

    return 0;
}
