class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int maxlength=0;

        for(auto& [key,count]:freq){
            if(freq.count(key+1)){
                maxlength=max(maxlength,count+freq[key+1]);
            }
        }
        return maxlength;
    }
};