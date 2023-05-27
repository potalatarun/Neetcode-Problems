class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        vector<char> ans;
        while(i<s.length()){
            if(isalpha(s[i]) or isdigit(s[i])){
                // ans+=tolower(s[i]);
                // char c = tolower(s[i]);
                // cout<<c;
                ans.push_back(tolower(s[i]));
            }
            i++;
        }
        i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j]){
                // cout<<s[i]<<s[j]<<endl;
                return false;
            }
            i++;
            j--;
        }
        // cout<<ans<<"how "<<endl;
        return true;
    }
};