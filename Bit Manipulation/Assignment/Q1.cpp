//Practice Quetion
#include <iostream>
using namespace std;

int clearRangeBits(int num, int i, int j) {
    int leftMask = (~0) << (j + 1);   // Step 1
    int rightMask = (1 << i) - 1;     // Step 2
    int mask = leftMask | rightMask;  // Step 3
    return num & mask;                // Step 4
}

int main() {
    int num = 15;
    int i = 1, j = 3;

    cout << clearRangeBits(num, i, j);
    return 0;
}
