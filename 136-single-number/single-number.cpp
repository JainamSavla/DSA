class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int x:nums){
            map[x]++;
        }
        for(auto const [nums,count]:map){
           if(count==1){
            return nums;
           }
        }
        return -1;
    }
};