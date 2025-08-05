class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid; // Look on the left side (including mid)
            } else {
                left = mid + 1; // Look on the right side (excluding mid)
            }
        }
        return left;
    }
};
