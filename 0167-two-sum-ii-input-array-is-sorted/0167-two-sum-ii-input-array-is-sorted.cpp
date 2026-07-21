#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        
        while (i < j) {
            int current_sum = numbers[i] + numbers[j];
            
            if (current_sum == target) {
                return {i + 1, j + 1};
            } else if (current_sum < target) {
                i++;
            } else {
                j--;
            }
        }
        
        return {};
    }
};