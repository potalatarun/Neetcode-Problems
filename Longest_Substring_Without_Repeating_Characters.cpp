class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==NULL)return 0;
        unordered_map<char,int>mp;
        int start=0,diff=0;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end() and mp[s[i]]>=start){
                diff = max(diff,i-start-1);
                start=mp[s[i]]+1;
                mp[s[i]]=i;
            }
            else{
                mp[s[i]]=i;
                diff = max(diff,i-start);
            }
        }
        return (diff==0)?1:diff+1;
    }
};