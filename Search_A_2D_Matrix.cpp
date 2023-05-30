class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] and target<=matrix[i][n]){
                int start=0,end=n;
                while(start<=end){
                    int mid = end - (end-start)/2;
                    if(target==matrix[i][mid]){
                        return true;
                    }
                    else if(target<matrix[i][mid]){
                        end=mid-1;
                    }
                    else start=mid+1;
                }
            }
        }
        return false;
    }
};