class Solution {
public:
    int mySqrt(int x) {
        int left = 1;
        int right = x;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long midValue = mid * mid;
            int target = x;

            if (midValue == target) {
                return mid;
            } else if (midValue < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;
    }
};