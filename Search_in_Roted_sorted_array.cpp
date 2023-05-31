class Solution {
public:
int findMin(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0){
            return n;
        }
        
        if(nums[0]<nums[n])return nums[0];
        if(n==1){
            return n;
        }
        if(nums[n]<nums[n-1])return n;
        int start = 0, end = n;
        if(n==0){
            return n;
        }
        while(start<=end){
            int mid = end - (end - start)/2;
            if(nums[mid]<nums[mid-1] and nums[mid]<nums[mid+1]){
                return mid;
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
    int search(vector<int>& nums, int target) {
        int first=false;
        int n=nums.size()-1;
        int m = findMin(nums);
        int start,end;
        if(n==0 and nums[n]==target)return n;
        if(target>=nums[0]){
            start=0;
            end = m-1;
        }
        else{
            start=m;
            end=n;
        }
        if(nums[n]>nums[0]){
            start=0;
            end=n;
        }
        while(start<=end){
            int mid = end - (end-start)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};