#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count length of last word
        int len = 0;
        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);   // To take full line including spaces

    int result = obj.lengthOfLastWord(s);
    cout << "Length of last word: " << result << endl;

    return 0;
}
