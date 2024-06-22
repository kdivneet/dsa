class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long total_time = req_time(piles, mid);
            if (total_time <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

private:
    long long req_time(const std::vector<int>& piles, int k) {
        long long total_time = 0;
        for (int num : piles) {
            total_time += (num + k - 1) / k; 
        }
        return total_time;
    }
};