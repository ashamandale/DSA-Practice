//Prime numbers bits on

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = {2,3,5,7,11,13,17,19};
        
        int count = 0;
        
        for(int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);
            if(primes.count(bits))
                count++;
        }
        
        return count;
    }
};

int main() {
    int left, right;
    cout << "Enter left and right: ";
    cin >> left >> right;

    Solution obj;
    int result = obj.countPrimeSetBits(left, right);

    cout << "Count of numbers with prime set bits: " << result << endl;

    return 0;
}
