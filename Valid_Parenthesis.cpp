class Solution {
public:
    bool isValid(string s) {
        stack<char>q;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                q.push(s[i]);
            }
            else if(s[i]==')'){
                if(q.empty()==true)return false;
                char temp = q.top();
                if(temp!='(')return false;
                if(!q.empty())q.pop();
            }
            else if(s[i]==']'){
                if(q.empty()==true)return false;
                char temp = q.top();
                if(temp!='[')return false;
                if(!q.empty())q.pop();
            }
            else if(s[i]=='}'){
                if(q.empty()==true)return false;
                char temp = q.top();
                if(temp!='{')return false;
                if(!q.empty())q.pop();
            }
        }
        if(q.empty())return true;
        return false;
    }
};