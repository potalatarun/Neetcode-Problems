class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left_col = 0;
        int right_col =n-1;
        int top_row = 0;
        int bot_row = n-1;
        vector<vector<int>>a;
        for(int i=0;i<n;i++){
            vector<int>temp(n,0);
            a.push_back(temp);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j];
            }
        }
        int j = 0;
        int val = 1;
        while(j<(n*n)){
            for(int i=left_col;i<=right_col && j<n*n;i++){
                a[top_row][i]=val;
                val++;
                j++;
            }
            top_row++;
            for(int i=top_row;i<=bot_row&& j<n*n;i++){
                a[i][right_col]=val;
                val++;
                j++;
            }
            right_col--;
            for(int i=right_col;i>=left_col&& j<n*n;i--){
                a[bot_row][i]=val;
                val++;
                j++;
            }
            bot_row--;
            for(int i=bot_row;i>=top_row&& j<n*n;i--){
                a[i][left_col]=val;
                val++;
                j++;
            }
            left_col++;
        }
        return a;
    }
};