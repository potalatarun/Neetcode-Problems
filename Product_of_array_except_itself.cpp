class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0,ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }
            else{
                ans*=nums[i];
            }
        }
        vector<int>m;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
                if(zeros==1)m.push_back(ans);
                else m.push_back(0);
            }
            else if(zeros>0){
                m.push_back(0);
            }
            else{
                int k = ans/nums[i];
                m.push_back(k);
            }
            i++;
        }
        return m;
    }
};