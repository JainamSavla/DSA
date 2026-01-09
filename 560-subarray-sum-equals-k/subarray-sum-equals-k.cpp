class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) { // note: j starts at i
                sum += nums[j]; // sum of subarray nums[i..j]
                if (sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
