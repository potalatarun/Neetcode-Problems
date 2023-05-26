class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i+1;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[target-nums[i]]!=0 and i!=mp[target-nums[i]]-1){
                return {i,mp[target-nums[i]]-1};
            }
        }
        return {0,0};
    }
};