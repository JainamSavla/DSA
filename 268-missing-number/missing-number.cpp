class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);

for(int i=0;i<nums.size();i++){
    arr[i]=i;
}
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(arr[i]!=nums[i]){
                return arr[i];
            }
        }
        return n;
    }
};