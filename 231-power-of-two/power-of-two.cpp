class Solution {
public:
    bool isPowerOfTwo(int n) {
        // n must be positive, and n & (n - 1) must be 0 to drop the only set bit
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};