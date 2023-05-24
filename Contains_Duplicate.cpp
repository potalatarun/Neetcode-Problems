class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0;
        while(i<nums.size()){
            int k=nums[i];
            mp[k]++;
            if(mp[k]>1){
                return true;
            }
            i++;
        }
        return false;
    }
};