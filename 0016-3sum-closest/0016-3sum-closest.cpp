class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int minDiff = INT_MAX;

        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(target - sum);

                if (diff < minDiff) {
                    minDiff = diff;
                    ans = sum;
                }

                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else
                    return sum;   // Exact match
            }
        }

        return ans;
    }
};