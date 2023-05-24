class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>ss;
        for(int i=0;i<s.length();i++){
            ss[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(ss[t[i]]<=0)return false;
            --ss[t[i]];
        }
        return true;
    }
};