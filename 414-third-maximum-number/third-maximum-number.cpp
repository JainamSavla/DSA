class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int distinct=1;
        int last = nums.back();
        for(int i=nums.size()-1;i<nums.size();i--){
          if(nums[i]!=last){
            distinct++;
            last = nums[i];
          }
          if (distinct == 3) {
            return nums[i];
        }
        }
        
        return nums.back();
    }
};