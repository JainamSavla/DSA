class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        vector<int> arr;
        arr.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { // only push unique elements
                arr.push_back(nums[i]);
            }
        }

        // Copy back to nums to satisfy "in-place" requirement
        for (int i = 0; i < arr.size(); i++) {
            nums[i] = arr[i];
        }

        return arr.size(); // k = number of unique elements
    }
};
