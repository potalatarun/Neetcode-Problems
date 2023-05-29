class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(string a:tokens){
            char i = a[0];
            if(isdigit(i)==true or a.length()>1){
                // cout<<i<<"  ";
                int temp = stoi(a);
                // cout<<temp<<endl;
                s.push(temp);
            }
            else{
                if(a[0]=='+'){
                    int two = s.top();
                    s.pop();
                    int one = s.top();
                    s.pop();
                    s.push(one+two);
                }
                else if(a[0]=='-'){
                    int two = s.top();
                    s.pop();
                    int one = s.top();
                    s.pop();
                    s.push(one-two);
                }
                else if(a[0]=='*'){
                    int two = s.top();
                    s.pop();
                    int one = s.top();
                    if(s.empty()==false)s.pop();
                    s.push(one*two);
                }
                else if(a[0]=='/'){
                    int two = s.top();
                    s.pop();
                    int one = s.top();
                    if(s.empty()==false)s.pop();
                    s.push(one/two);
                }
                
            }
            
        }
        if(s.empty()==false)return s.top();
        return -1;
    }
};