class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            if(mp.find(a)!=mp.end()){
                vector<string>m=mp[a];
                m.push_back(strs[i]);
                mp[a]=m;
            }
            else{
                vector<string>m;
                m.push_back(strs[i]);
                mp[a]=m;
            }
        }
        vector<vector<string>>ans;
        auto itr=mp.begin();
        for(;itr!=mp.end();itr++){
            vector<string>m=itr->second;
            ans.push_back(m);
        }
        return ans;
    }
};