class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int tar = target - numbers[i];
            // now apply binary search here to search the tar and the position of it is not i
            // binary search
            int start=0,end=numbers.size()-1;
            while(start <= end){
                int mid = (end + start)/2;
                if(numbers[mid]==tar and mid!=i){
                    if(mid<i)return {mid+1,i+1};
                    else return {i+1,mid+1};
                }
                else if (numbers[mid]<tar){
                    start=mid+1;
                }
                else {
                    end = mid-1;
                }
            }
        }
        return {0,0};
    }
};