//Palindrome Numbers
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindrome
    if (x < 0) return false;

    int original = x;
    int reversed = 0;

    while (x > 0) {
        int lastDigit = x % 10;
        reversed = reversed * 10 + lastDigit;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int x;
    cin >> x;

    if (isPalindrome(x))
        cout << "true";
    else
        cout << "false";

    return 0;
}
