class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0){
            return nums[n];
        }
        
        if(nums[0]<nums[n])return nums[0];
        if(n==1){
            return nums[n];
        }
        if(nums[n]<nums[n-1])return nums[n];
        int start = 0, end = n;
        while(start<=end){
            int mid = end - (end - start)/2;
            if(nums[mid]<nums[mid-1] and nums[mid]<nums[mid+1]){
                return nums[mid];
            }
            else if(nums[mid]>nums[mid-1] and nums[mid]>nums[n]){
                start = mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return 0;
    }
};